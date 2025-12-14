#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-848;
unsigned char var_1 = (unsigned char)250;
unsigned char var_2 = (unsigned char)10;
int var_3 = 301099116;
unsigned long long int var_4 = 4550961336361891063ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 6720940568185935050ULL;
unsigned long long int var_8 = 2368323432595565317ULL;
short var_11 = (short)25347;
unsigned long long int var_15 = 14375650642783025830ULL;
int zero = 0;
unsigned long long int var_19 = 1383400266538423125ULL;
int var_20 = -692760787;
unsigned char var_21 = (unsigned char)9;
unsigned char var_22 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
