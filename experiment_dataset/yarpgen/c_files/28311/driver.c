#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10592317157891137749ULL;
unsigned char var_10 = (unsigned char)207;
unsigned short var_14 = (unsigned short)4056;
int zero = 0;
signed char var_18 = (signed char)-45;
int var_19 = -1751565108;
long long int var_20 = 3645443821945486431LL;
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
