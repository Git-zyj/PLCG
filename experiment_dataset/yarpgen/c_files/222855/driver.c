#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -652604684;
int var_4 = 423915788;
unsigned long long int var_5 = 12648031927200811602ULL;
long long int var_6 = -3938047466290803573LL;
long long int var_8 = 1213945847002743449LL;
long long int var_9 = -7379281960214964842LL;
int zero = 0;
unsigned char var_10 = (unsigned char)185;
unsigned char var_11 = (unsigned char)9;
unsigned char var_12 = (unsigned char)69;
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
