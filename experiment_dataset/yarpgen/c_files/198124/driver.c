#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -194229212;
int var_2 = 177064767;
short var_3 = (short)5785;
unsigned short var_4 = (unsigned short)47385;
unsigned char var_6 = (unsigned char)130;
unsigned char var_7 = (unsigned char)71;
signed char var_9 = (signed char)-80;
unsigned short var_11 = (unsigned short)60115;
unsigned short var_14 = (unsigned short)16017;
short var_15 = (short)-27229;
int zero = 0;
unsigned short var_16 = (unsigned short)19222;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)106;
unsigned int var_19 = 879508208U;
void init() {
}

void checksum() {
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
