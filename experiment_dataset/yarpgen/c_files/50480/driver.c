#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned char var_1 = (unsigned char)119;
short var_3 = (short)19627;
_Bool var_4 = (_Bool)1;
int var_9 = -1848822306;
int var_13 = 576697311;
unsigned long long int var_14 = 1890631922254322762ULL;
int var_15 = -848538863;
long long int var_16 = -6390843816404015294LL;
int zero = 0;
short var_18 = (short)-25439;
unsigned long long int var_19 = 4604791278423152692ULL;
signed char var_20 = (signed char)-19;
void init() {
}

void checksum() {
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
