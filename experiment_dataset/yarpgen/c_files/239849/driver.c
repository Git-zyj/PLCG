#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5498774230097584717ULL;
long long int var_3 = -3050740915134581057LL;
long long int var_9 = -9135243305716756535LL;
long long int var_10 = 5899206002802777942LL;
long long int var_15 = 2195527576213866964LL;
long long int var_17 = -4225187578062961724LL;
int zero = 0;
unsigned long long int var_20 = 816371585232802469ULL;
long long int var_21 = 6412666165073018318LL;
long long int var_22 = 3579815037062755869LL;
long long int var_23 = -1138627766140166315LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
