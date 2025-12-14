#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2711444848239474386LL;
signed char var_4 = (signed char)-27;
signed char var_5 = (signed char)7;
int var_7 = 163672785;
int zero = 0;
signed char var_10 = (signed char)69;
unsigned long long int var_11 = 12254031907123549662ULL;
unsigned char var_12 = (unsigned char)72;
unsigned short var_13 = (unsigned short)38961;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
