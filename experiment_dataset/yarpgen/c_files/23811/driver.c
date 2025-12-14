#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 671843061;
unsigned long long int var_8 = 17799339172484974853ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)199;
unsigned char var_12 = (unsigned char)43;
int var_13 = -110346916;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
