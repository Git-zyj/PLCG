#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
int var_3 = 437044200;
unsigned int var_4 = 3546807328U;
short var_5 = (short)-28207;
unsigned long long int var_7 = 16638167710484734438ULL;
long long int var_10 = 7356542997170682982LL;
long long int var_14 = 5743648967880675033LL;
int var_16 = 689988130;
int zero = 0;
int var_17 = -130601675;
unsigned long long int var_18 = 13311585445683180528ULL;
unsigned char var_19 = (unsigned char)130;
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
