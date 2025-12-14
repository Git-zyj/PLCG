#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1654104974;
_Bool var_1 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-13;
int zero = 0;
unsigned char var_10 = (unsigned char)103;
unsigned long long int var_11 = 14852127409328584642ULL;
signed char var_12 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
