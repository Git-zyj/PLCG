#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2115530015;
unsigned char var_5 = (unsigned char)155;
unsigned long long int var_10 = 4457447705264760074ULL;
int var_11 = -210671557;
long long int var_13 = -4823543271814196716LL;
int zero = 0;
unsigned long long int var_14 = 6856921748026015417ULL;
long long int var_15 = -6143028532386105795LL;
unsigned long long int var_16 = 17185343640547954895ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
