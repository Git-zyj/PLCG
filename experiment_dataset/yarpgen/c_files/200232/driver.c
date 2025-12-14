#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1534;
int var_1 = -534675528;
unsigned int var_3 = 3702736786U;
_Bool var_4 = (_Bool)1;
long long int var_5 = 7483254683747765682LL;
unsigned char var_6 = (unsigned char)153;
unsigned char var_8 = (unsigned char)148;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)34915;
unsigned long long int var_16 = 393953755279377769ULL;
unsigned char var_19 = (unsigned char)26;
int zero = 0;
unsigned long long int var_20 = 13737441619831875876ULL;
long long int var_21 = 8827175638267746189LL;
int var_22 = -973689595;
void init() {
}

void checksum() {
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
