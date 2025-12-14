#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8766327094665907699LL;
unsigned long long int var_1 = 12172184174699177281ULL;
_Bool var_3 = (_Bool)0;
int var_4 = -817391086;
unsigned short var_5 = (unsigned short)50703;
unsigned long long int var_9 = 17842818422849772963ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)2527;
long long int var_19 = 4473250081341161150LL;
int var_20 = 740365231;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
