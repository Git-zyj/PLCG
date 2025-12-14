#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1054293904;
unsigned char var_4 = (unsigned char)11;
int var_5 = -594877662;
int var_7 = -482623123;
unsigned char var_8 = (unsigned char)40;
unsigned short var_9 = (unsigned short)45578;
unsigned char var_10 = (unsigned char)93;
unsigned long long int var_11 = 4186714129801573808ULL;
unsigned char var_12 = (unsigned char)155;
int zero = 0;
unsigned short var_13 = (unsigned short)18561;
unsigned char var_14 = (unsigned char)99;
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
