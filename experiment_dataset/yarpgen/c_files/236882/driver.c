#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
_Bool var_10 = (_Bool)1;
int var_14 = -343554207;
int zero = 0;
unsigned short var_18 = (unsigned short)11660;
unsigned long long int var_19 = 15107883709189704355ULL;
int var_20 = -834679355;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
