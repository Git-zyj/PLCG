#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14584085182858214572ULL;
unsigned short var_8 = (unsigned short)59972;
unsigned short var_10 = (unsigned short)8945;
unsigned long long int var_17 = 14840746886768882452ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 18278115863277024606ULL;
void init() {
}

void checksum() {
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
