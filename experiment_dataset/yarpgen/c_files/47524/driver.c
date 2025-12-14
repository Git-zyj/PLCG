#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1251803687469184147ULL;
unsigned long long int var_1 = 5108520386503602400ULL;
unsigned long long int var_3 = 17173547352682907018ULL;
unsigned short var_8 = (unsigned short)20868;
unsigned long long int var_9 = 9600744954489197465ULL;
unsigned long long int var_10 = 2933558011561619768ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)54769;
unsigned short var_13 = (unsigned short)59371;
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
