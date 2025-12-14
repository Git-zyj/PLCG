#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1237530619;
unsigned char var_2 = (unsigned char)65;
unsigned long long int var_8 = 5013241463094150282ULL;
unsigned long long int var_13 = 8449228383483902103ULL;
int zero = 0;
unsigned long long int var_18 = 15406069740015843153ULL;
unsigned long long int var_19 = 5234886878915739151ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
