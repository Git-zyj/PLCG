#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3796182483461075470LL;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)127;
int zero = 0;
unsigned int var_14 = 2504158339U;
unsigned char var_15 = (unsigned char)129;
long long int var_16 = 5373184070191449323LL;
unsigned long long int var_17 = 5098089603801010439ULL;
unsigned short var_18 = (unsigned short)22994;
long long int var_19 = 305464706759165168LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
