#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
int var_1 = 1666399093;
unsigned int var_2 = 218258721U;
unsigned long long int var_3 = 18367357557696835996ULL;
unsigned long long int var_4 = 2329800312052819350ULL;
int var_5 = 1397338313;
unsigned short var_6 = (unsigned short)49140;
short var_7 = (short)-18608;
unsigned long long int var_8 = 16506594872277705632ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-101;
int zero = 0;
signed char var_11 = (signed char)90;
unsigned long long int var_12 = 13841315578948128894ULL;
unsigned int var_13 = 3354300718U;
signed char var_14 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
