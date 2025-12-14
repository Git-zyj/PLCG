#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)114;
int var_3 = 423190774;
int var_7 = 128753193;
unsigned short var_13 = (unsigned short)19864;
int zero = 0;
unsigned int var_18 = 3436064161U;
long long int var_19 = -7023586576180131196LL;
unsigned short var_20 = (unsigned short)38710;
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
