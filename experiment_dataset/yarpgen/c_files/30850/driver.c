#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1315216616;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)162;
unsigned short var_17 = (unsigned short)58118;
int zero = 0;
unsigned long long int var_18 = 16619237276777680655ULL;
unsigned char var_19 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
