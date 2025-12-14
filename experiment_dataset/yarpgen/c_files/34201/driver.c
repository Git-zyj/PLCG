#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23400;
long long int var_2 = -4891297229301814790LL;
unsigned char var_3 = (unsigned char)102;
signed char var_5 = (signed char)36;
unsigned int var_6 = 4291741434U;
unsigned long long int var_8 = 7517198647251808191ULL;
unsigned int var_9 = 1201669757U;
unsigned long long int var_12 = 11139111990931694173ULL;
signed char var_14 = (signed char)-18;
unsigned short var_15 = (unsigned short)41533;
short var_16 = (short)-4191;
short var_17 = (short)-8165;
int zero = 0;
short var_19 = (short)-11501;
short var_20 = (short)-12208;
unsigned short var_21 = (unsigned short)53042;
unsigned long long int var_22 = 15600667875241727638ULL;
int var_23 = 1099559280;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
