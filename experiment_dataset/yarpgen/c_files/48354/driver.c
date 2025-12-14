#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 634158395;
int var_1 = -378663307;
short var_5 = (short)32577;
unsigned short var_11 = (unsigned short)20778;
signed char var_17 = (signed char)119;
int zero = 0;
long long int var_18 = 104090858970392126LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)16;
unsigned int var_21 = 687198833U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
