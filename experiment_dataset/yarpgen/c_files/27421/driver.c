#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12996618413882785651ULL;
unsigned long long int var_2 = 5508203256386768985ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 17991127288422185821ULL;
unsigned short var_12 = (unsigned short)31359;
int zero = 0;
signed char var_16 = (signed char)88;
int var_17 = 1828686880;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
