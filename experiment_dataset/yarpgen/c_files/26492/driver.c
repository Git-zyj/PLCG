#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54764;
short var_4 = (short)5936;
long long int var_5 = 4162225408768926262LL;
unsigned long long int var_8 = 11451669636763372012ULL;
short var_9 = (short)-6463;
unsigned char var_10 = (unsigned char)180;
int var_11 = 2097962160;
int var_12 = -64077156;
unsigned char var_14 = (unsigned char)110;
short var_16 = (short)-26506;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-26956;
unsigned char var_19 = (unsigned char)90;
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
