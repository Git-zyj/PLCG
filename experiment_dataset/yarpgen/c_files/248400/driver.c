#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned short var_4 = (unsigned short)23815;
unsigned long long int var_12 = 16381105903576377367ULL;
unsigned long long int var_13 = 8423606861834552389ULL;
int zero = 0;
unsigned int var_17 = 1567026881U;
_Bool var_18 = (_Bool)1;
int var_19 = -1763824588;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
