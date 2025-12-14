#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)54;
long long int var_5 = 2044607262726655759LL;
long long int var_6 = -1102807426265072553LL;
long long int var_8 = -2526991139449019916LL;
signed char var_9 = (signed char)-27;
int zero = 0;
unsigned long long int var_15 = 1848591187485700644ULL;
unsigned long long int var_16 = 6046105734779727187ULL;
long long int var_17 = 5397068972982758047LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
