#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7091307244267094626ULL;
int var_5 = 618246585;
int var_10 = -1303950833;
unsigned long long int var_11 = 12660569439988174107ULL;
short var_13 = (short)-296;
int zero = 0;
unsigned long long int var_20 = 5986573669051245107ULL;
unsigned long long int var_21 = 12873025886753185508ULL;
void init() {
}

void checksum() {
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
