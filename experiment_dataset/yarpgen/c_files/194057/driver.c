#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27233;
unsigned int var_5 = 2273366563U;
unsigned char var_6 = (unsigned char)105;
unsigned long long int var_7 = 4761167161537964713ULL;
unsigned char var_9 = (unsigned char)55;
unsigned char var_13 = (unsigned char)117;
unsigned long long int var_14 = 16741364051345313982ULL;
int zero = 0;
unsigned long long int var_15 = 16932588688631003974ULL;
unsigned short var_16 = (unsigned short)64004;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
