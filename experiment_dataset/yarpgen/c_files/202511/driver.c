#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 556593137892085828ULL;
unsigned long long int var_7 = 7812421387423383565ULL;
unsigned short var_13 = (unsigned short)6409;
unsigned short var_18 = (unsigned short)33473;
int zero = 0;
unsigned int var_20 = 748533523U;
unsigned long long int var_21 = 1124424524471629268ULL;
unsigned long long int var_22 = 10466850624551109741ULL;
unsigned long long int var_23 = 7524428079743478382ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
