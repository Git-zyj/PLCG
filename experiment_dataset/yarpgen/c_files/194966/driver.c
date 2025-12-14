#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 53206214;
int var_8 = 300131655;
long long int var_11 = 3380310586697030233LL;
int var_13 = -1644441268;
unsigned char var_14 = (unsigned char)57;
signed char var_16 = (signed char)-92;
int zero = 0;
unsigned int var_18 = 1734086240U;
int var_19 = 428244627;
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
