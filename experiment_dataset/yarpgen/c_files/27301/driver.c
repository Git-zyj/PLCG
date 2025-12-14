#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2395717086432431300ULL;
signed char var_2 = (signed char)-88;
unsigned short var_3 = (unsigned short)54808;
_Bool var_4 = (_Bool)0;
long long int var_6 = 6786264357487528655LL;
long long int var_7 = -8146886960159418961LL;
int zero = 0;
unsigned long long int var_10 = 13178362249450425983ULL;
unsigned short var_11 = (unsigned short)51813;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 8967880475438727602ULL;
signed char var_14 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
