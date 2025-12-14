#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11208;
unsigned short var_3 = (unsigned short)50943;
unsigned char var_6 = (unsigned char)133;
int var_10 = 1574033304;
int var_11 = 495830867;
int zero = 0;
int var_13 = -981256095;
unsigned char var_14 = (unsigned char)59;
void init() {
}

void checksum() {
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
