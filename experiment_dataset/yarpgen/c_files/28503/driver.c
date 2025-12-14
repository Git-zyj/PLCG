#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14529714920649325820ULL;
int var_4 = 1450594321;
long long int var_8 = 5158282334356030024LL;
unsigned long long int var_9 = 550697749501816975ULL;
unsigned char var_10 = (unsigned char)240;
signed char var_14 = (signed char)69;
int zero = 0;
unsigned char var_15 = (unsigned char)90;
unsigned long long int var_16 = 16380410164511490663ULL;
long long int var_17 = 5133086040074081709LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
