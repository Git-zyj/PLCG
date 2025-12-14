#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6479;
unsigned char var_4 = (unsigned char)62;
unsigned long long int var_5 = 3873764033268736916ULL;
short var_6 = (short)-1352;
long long int var_7 = 6717894218757474990LL;
short var_9 = (short)-30409;
short var_10 = (short)21433;
short var_12 = (short)-21813;
short var_13 = (short)-11773;
int zero = 0;
short var_15 = (short)-7251;
long long int var_16 = 240976322618333681LL;
unsigned short var_17 = (unsigned short)22996;
unsigned char var_18 = (unsigned char)93;
unsigned char var_19 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
