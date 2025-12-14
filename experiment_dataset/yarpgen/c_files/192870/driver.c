#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)82;
int var_2 = -1183195532;
short var_4 = (short)-16708;
unsigned long long int var_5 = 15831018594887228822ULL;
signed char var_7 = (signed char)56;
unsigned short var_8 = (unsigned short)18874;
long long int var_9 = 3867145345615877137LL;
short var_10 = (short)-10265;
signed char var_11 = (signed char)-79;
signed char var_12 = (signed char)1;
unsigned short var_14 = (unsigned short)21143;
int zero = 0;
short var_16 = (short)-26764;
short var_17 = (short)-600;
signed char var_18 = (signed char)116;
void init() {
}

void checksum() {
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
