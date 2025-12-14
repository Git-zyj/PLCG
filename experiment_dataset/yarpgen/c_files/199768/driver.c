#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 249360285U;
unsigned long long int var_8 = 5947698908727424535ULL;
unsigned long long int var_13 = 17033750262972671596ULL;
unsigned char var_15 = (unsigned char)90;
int zero = 0;
unsigned char var_18 = (unsigned char)34;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)28;
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
