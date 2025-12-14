#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42782;
short var_5 = (short)1052;
int var_6 = -768202351;
signed char var_8 = (signed char)-29;
long long int var_9 = 1066268133981368548LL;
signed char var_17 = (signed char)-80;
unsigned char var_18 = (unsigned char)178;
int zero = 0;
long long int var_19 = 2569797533018265434LL;
signed char var_20 = (signed char)-80;
signed char var_21 = (signed char)120;
int var_22 = 470865631;
void init() {
}

void checksum() {
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
