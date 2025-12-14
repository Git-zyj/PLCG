#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7466455879323871471LL;
long long int var_8 = 6772441037894276571LL;
long long int var_10 = 4757304384981843185LL;
short var_12 = (short)21247;
int var_15 = -2112414583;
long long int var_16 = 102790111925315533LL;
int zero = 0;
unsigned char var_17 = (unsigned char)221;
long long int var_18 = 3267146998539900541LL;
unsigned char var_19 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
