#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4373195742431090163LL;
_Bool var_6 = (_Bool)1;
int var_12 = -1977448289;
int var_15 = -406831841;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
unsigned long long int var_18 = 12594943447781440112ULL;
unsigned int var_19 = 1771223289U;
long long int var_20 = -5891586496235610156LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
