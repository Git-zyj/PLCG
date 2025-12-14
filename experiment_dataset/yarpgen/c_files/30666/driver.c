#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 781276097U;
long long int var_2 = 6128890026202361380LL;
unsigned long long int var_5 = 16481359852253201587ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)155;
unsigned long long int var_12 = 6699190975651060897ULL;
void init() {
}

void checksum() {
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
