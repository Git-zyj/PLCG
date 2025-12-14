#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
unsigned short var_5 = (unsigned short)8711;
signed char var_6 = (signed char)-127;
int zero = 0;
unsigned short var_18 = (unsigned short)18778;
unsigned short var_19 = (unsigned short)28575;
signed char var_20 = (signed char)36;
unsigned short var_21 = (unsigned short)39586;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
