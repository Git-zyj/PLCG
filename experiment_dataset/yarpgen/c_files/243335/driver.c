#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27660;
unsigned char var_4 = (unsigned char)83;
signed char var_9 = (signed char)92;
int zero = 0;
unsigned long long int var_12 = 16911969448042914123ULL;
long long int var_13 = -626393246047429172LL;
void init() {
}

void checksum() {
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
