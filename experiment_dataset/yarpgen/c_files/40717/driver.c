#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)85;
unsigned char var_9 = (unsigned char)89;
unsigned long long int var_10 = 4615699602937155873ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4164074569133085533LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)44;
signed char var_18 = (signed char)-113;
unsigned char var_19 = (unsigned char)19;
int var_20 = 19905053;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
