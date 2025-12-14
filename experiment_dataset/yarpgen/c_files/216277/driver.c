#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4286705695U;
unsigned long long int var_2 = 6720520423584748353ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1830833919U;
int var_8 = -910896398;
unsigned int var_9 = 1425445808U;
int zero = 0;
unsigned char var_11 = (unsigned char)7;
unsigned int var_12 = 3156651099U;
void init() {
}

void checksum() {
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
