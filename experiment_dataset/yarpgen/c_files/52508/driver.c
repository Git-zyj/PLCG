#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
signed char var_1 = (signed char)-117;
short var_2 = (short)-27478;
unsigned char var_3 = (unsigned char)104;
signed char var_4 = (signed char)-35;
long long int var_5 = 2909321361391125092LL;
short var_6 = (short)-8351;
signed char var_8 = (signed char)-55;
int var_9 = 744693053;
int zero = 0;
signed char var_11 = (signed char)19;
long long int var_12 = -5018450769664109600LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
