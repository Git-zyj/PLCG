#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2722416768U;
unsigned long long int var_3 = 6599022465029363007ULL;
unsigned long long int var_4 = 7671355956377372933ULL;
signed char var_5 = (signed char)-76;
signed char var_6 = (signed char)-72;
unsigned char var_7 = (unsigned char)249;
long long int var_8 = -3605297471329952806LL;
unsigned char var_9 = (unsigned char)109;
long long int var_11 = 3675192027032151870LL;
int zero = 0;
unsigned int var_12 = 254693484U;
long long int var_13 = -6429345863822329480LL;
void init() {
}

void checksum() {
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
