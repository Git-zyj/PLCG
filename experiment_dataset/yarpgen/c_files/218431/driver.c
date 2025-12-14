#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 213238403529297344LL;
long long int var_9 = -9133317366149375896LL;
long long int var_11 = -7003451961222833156LL;
long long int var_12 = 8428812171503736958LL;
int zero = 0;
long long int var_20 = -3700434530654159450LL;
long long int var_21 = -7978594900841540738LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
