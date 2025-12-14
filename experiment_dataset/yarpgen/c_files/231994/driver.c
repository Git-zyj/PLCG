#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8198;
signed char var_6 = (signed char)103;
unsigned char var_9 = (unsigned char)94;
unsigned short var_10 = (unsigned short)36115;
short var_11 = (short)-23343;
signed char var_13 = (signed char)-34;
int zero = 0;
short var_18 = (short)-15781;
long long int var_19 = 11907585006171462LL;
unsigned char var_20 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
