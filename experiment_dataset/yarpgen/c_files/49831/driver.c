#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 76376642868031408ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)25040;
int var_7 = -1847188016;
unsigned short var_9 = (unsigned short)60419;
int zero = 0;
unsigned short var_14 = (unsigned short)64064;
unsigned char var_15 = (unsigned char)222;
unsigned short var_16 = (unsigned short)58390;
long long int var_17 = 613321008466769597LL;
short var_18 = (short)-5402;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
