#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10531720388683714135ULL;
unsigned int var_4 = 1594994747U;
long long int var_7 = 1223787445869265448LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_16 = -4841369034692668669LL;
unsigned long long int var_17 = 15031021746112565587ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
