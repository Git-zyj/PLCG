#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)50660;
unsigned short var_9 = (unsigned short)36580;
unsigned long long int var_11 = 18091910995188890168ULL;
unsigned short var_13 = (unsigned short)49057;
int zero = 0;
int var_19 = -1218344838;
int var_20 = 717639811;
unsigned char var_21 = (unsigned char)225;
signed char var_22 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
