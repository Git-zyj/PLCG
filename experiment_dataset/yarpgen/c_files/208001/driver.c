#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15920143851762799637ULL;
short var_4 = (short)-24127;
long long int var_8 = -6444194422913432726LL;
int zero = 0;
unsigned char var_12 = (unsigned char)170;
int var_13 = -476530938;
unsigned long long int var_14 = 5380784171821087546ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
