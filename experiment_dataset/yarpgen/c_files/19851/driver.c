#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27159;
long long int var_11 = 2093474575318505066LL;
unsigned short var_15 = (unsigned short)21842;
int zero = 0;
int var_19 = 1991145391;
signed char var_20 = (signed char)-54;
long long int var_21 = -8038490552926440728LL;
void init() {
}

void checksum() {
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
