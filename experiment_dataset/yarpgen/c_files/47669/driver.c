#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45875;
short var_2 = (short)6245;
short var_3 = (short)6767;
unsigned char var_4 = (unsigned char)225;
unsigned short var_5 = (unsigned short)23349;
short var_6 = (short)12660;
unsigned char var_7 = (unsigned char)82;
signed char var_8 = (signed char)36;
short var_9 = (short)4420;
int zero = 0;
unsigned short var_10 = (unsigned short)15092;
signed char var_11 = (signed char)-104;
short var_12 = (short)-28904;
signed char var_13 = (signed char)-25;
signed char var_14 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
