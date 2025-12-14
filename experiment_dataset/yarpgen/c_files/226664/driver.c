#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18293198519774965885ULL;
unsigned short var_2 = (unsigned short)59278;
signed char var_3 = (signed char)-58;
int var_8 = -2121316954;
unsigned long long int var_11 = 480941791836654837ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)60261;
unsigned short var_13 = (unsigned short)60850;
unsigned short var_14 = (unsigned short)64823;
void init() {
}

void checksum() {
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
