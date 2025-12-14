#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
int var_2 = -1644953768;
int var_5 = -994358324;
signed char var_6 = (signed char)44;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-125;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_19 = (short)19860;
unsigned short var_20 = (unsigned short)52541;
short var_21 = (short)-15455;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
