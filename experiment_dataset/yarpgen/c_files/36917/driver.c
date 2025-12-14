#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3523;
unsigned short var_2 = (unsigned short)45572;
unsigned char var_4 = (unsigned char)185;
unsigned long long int var_5 = 10935979160639266436ULL;
unsigned char var_6 = (unsigned char)227;
unsigned short var_8 = (unsigned short)14664;
unsigned short var_11 = (unsigned short)20275;
signed char var_13 = (signed char)-113;
unsigned long long int var_14 = 12798832737197165042ULL;
int zero = 0;
unsigned long long int var_15 = 4938609746880879105ULL;
unsigned short var_16 = (unsigned short)31767;
unsigned short var_17 = (unsigned short)1809;
unsigned char var_18 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
