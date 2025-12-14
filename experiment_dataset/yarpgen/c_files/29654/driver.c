#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32296;
short var_2 = (short)-28955;
unsigned char var_3 = (unsigned char)51;
short var_4 = (short)-31149;
unsigned char var_5 = (unsigned char)78;
unsigned long long int var_6 = 10833102171854757390ULL;
int var_8 = 813407303;
unsigned char var_9 = (unsigned char)102;
unsigned char var_10 = (unsigned char)202;
unsigned short var_11 = (unsigned short)27450;
unsigned short var_12 = (unsigned short)52637;
short var_14 = (short)22205;
unsigned short var_15 = (unsigned short)63334;
signed char var_16 = (signed char)-77;
signed char var_17 = (signed char)-66;
int zero = 0;
signed char var_18 = (signed char)-84;
signed char var_19 = (signed char)-101;
unsigned char var_20 = (unsigned char)44;
unsigned long long int var_21 = 17975894619820321415ULL;
unsigned short var_22 = (unsigned short)6331;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
