#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6880688592597415454ULL;
unsigned long long int var_5 = 10717403629939484944ULL;
int var_6 = 385398900;
_Bool var_8 = (_Bool)0;
long long int var_9 = -3147242194091909987LL;
unsigned char var_10 = (unsigned char)150;
signed char var_12 = (signed char)-37;
unsigned long long int var_15 = 2321692329627288657ULL;
unsigned char var_16 = (unsigned char)106;
int zero = 0;
unsigned long long int var_17 = 11829777179201761997ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)38247;
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
