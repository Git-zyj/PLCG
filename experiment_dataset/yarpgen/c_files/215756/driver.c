#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1260083555;
unsigned short var_4 = (unsigned short)20159;
int var_6 = 1336729310;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2800349178U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)41104;
int var_19 = 749783136;
unsigned int var_20 = 3140691809U;
void init() {
}

void checksum() {
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
