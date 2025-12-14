#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)226;
signed char var_2 = (signed char)-86;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2637666497U;
int var_10 = 1392807955;
long long int var_11 = -509546936048175785LL;
int zero = 0;
short var_12 = (short)31578;
unsigned long long int var_13 = 7709713907825249077ULL;
long long int var_14 = 6128454754822687788LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
