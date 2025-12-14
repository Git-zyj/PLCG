#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned long long int var_1 = 4587924437988317780ULL;
unsigned short var_3 = (unsigned short)3050;
unsigned long long int var_6 = 3993637580799904260ULL;
unsigned long long int var_9 = 12793261759472907969ULL;
unsigned long long int var_11 = 14562905996982344554ULL;
signed char var_13 = (signed char)-38;
unsigned char var_16 = (unsigned char)52;
int zero = 0;
signed char var_18 = (signed char)-98;
short var_19 = (short)15423;
int var_20 = 1675080140;
unsigned long long int var_21 = 8544293426189039277ULL;
unsigned char var_22 = (unsigned char)75;
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
