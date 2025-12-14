#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27085;
unsigned long long int var_5 = 4911122783319101411ULL;
int var_9 = 773846523;
int zero = 0;
long long int var_10 = -8681185478759119029LL;
unsigned char var_11 = (unsigned char)216;
signed char var_12 = (signed char)19;
int var_13 = 42246947;
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
