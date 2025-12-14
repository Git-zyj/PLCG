#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10738908195474971880ULL;
unsigned short var_6 = (unsigned short)49826;
unsigned long long int var_10 = 3977299074961435923ULL;
unsigned long long int var_14 = 6789803145552773848ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)53483;
long long int var_16 = -8146385082458945610LL;
void init() {
}

void checksum() {
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
