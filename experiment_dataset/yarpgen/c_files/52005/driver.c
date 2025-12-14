#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12455884560614859197ULL;
unsigned long long int var_3 = 7567112904295838621ULL;
unsigned short var_6 = (unsigned short)11367;
signed char var_7 = (signed char)-102;
int var_8 = 860574988;
int zero = 0;
int var_14 = -678726679;
signed char var_15 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
