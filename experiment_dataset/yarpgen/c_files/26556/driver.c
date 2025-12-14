#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
_Bool var_2 = (_Bool)0;
long long int var_7 = 7832048101465156825LL;
unsigned int var_9 = 3457493290U;
long long int var_11 = 364912641488919959LL;
unsigned char var_15 = (unsigned char)53;
unsigned long long int var_17 = 12466642172363464134ULL;
int zero = 0;
long long int var_19 = 6401097910644157773LL;
unsigned long long int var_20 = 15781569229779867879ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
