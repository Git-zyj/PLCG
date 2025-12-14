#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-1;
unsigned char var_2 = (unsigned char)23;
unsigned long long int var_7 = 18265523348666502467ULL;
signed char var_8 = (signed char)-3;
int zero = 0;
unsigned long long int var_11 = 9356418250357003012ULL;
unsigned char var_12 = (unsigned char)132;
unsigned long long int var_13 = 13655456678340052502ULL;
unsigned long long int var_14 = 13411370933288761128ULL;
void init() {
}

void checksum() {
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
