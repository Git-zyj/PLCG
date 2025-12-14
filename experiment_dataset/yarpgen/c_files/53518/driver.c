#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4941090242376455148LL;
unsigned long long int var_1 = 6421922605405950624ULL;
unsigned short var_2 = (unsigned short)53629;
long long int var_3 = 4935543211806125766LL;
short var_5 = (short)21334;
unsigned int var_6 = 48835440U;
unsigned int var_7 = 1470077396U;
unsigned char var_9 = (unsigned char)146;
int zero = 0;
int var_10 = -1978093851;
int var_11 = 1183398104;
short var_12 = (short)-10759;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
