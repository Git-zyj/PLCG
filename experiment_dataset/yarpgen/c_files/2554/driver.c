#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)120;
signed char var_12 = (signed char)50;
int var_13 = -884135425;
int zero = 0;
signed char var_16 = (signed char)115;
long long int var_17 = 8513021813270893989LL;
unsigned char var_18 = (unsigned char)51;
unsigned long long int var_19 = 11040246353214709550ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
