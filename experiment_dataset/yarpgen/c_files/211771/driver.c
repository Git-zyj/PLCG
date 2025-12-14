#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5520251508981910835LL;
unsigned long long int var_10 = 647911767350841879ULL;
unsigned long long int var_17 = 16146913673856237965ULL;
int zero = 0;
signed char var_19 = (signed char)94;
int var_20 = 317871129;
unsigned long long int var_21 = 9470619074588492274ULL;
unsigned short var_22 = (unsigned short)38346;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
