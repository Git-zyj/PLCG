#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 1265433935704856041LL;
long long int var_4 = -1474474758146646047LL;
short var_5 = (short)-5268;
long long int var_7 = -899225789327892464LL;
signed char var_8 = (signed char)82;
short var_9 = (short)-21744;
int zero = 0;
unsigned char var_14 = (unsigned char)61;
short var_15 = (short)-11904;
unsigned char var_16 = (unsigned char)76;
unsigned long long int var_17 = 13195241548144471873ULL;
unsigned long long int var_18 = 10986748316554499936ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
