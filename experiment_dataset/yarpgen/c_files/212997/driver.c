#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-27;
unsigned char var_6 = (unsigned char)188;
short var_7 = (short)24551;
unsigned long long int var_8 = 14272024998673509761ULL;
unsigned int var_9 = 2975116116U;
int var_10 = 1123371719;
int var_12 = 1320084275;
int zero = 0;
unsigned int var_13 = 113652447U;
int var_14 = -1172988554;
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
