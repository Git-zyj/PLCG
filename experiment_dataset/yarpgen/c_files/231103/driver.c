#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14604017122272719435ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 8331460765315134472LL;
unsigned int var_8 = 2011601370U;
int zero = 0;
unsigned int var_12 = 1327082322U;
_Bool var_13 = (_Bool)1;
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
