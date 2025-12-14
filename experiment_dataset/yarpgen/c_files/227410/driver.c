#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12462;
long long int var_3 = 1451916101905213532LL;
signed char var_6 = (signed char)-58;
unsigned long long int var_9 = 10692634304839087510ULL;
long long int var_12 = 4895880528550907989LL;
short var_14 = (short)-20223;
int zero = 0;
unsigned long long int var_18 = 7554513591272995277ULL;
int var_19 = 647952830;
unsigned long long int var_20 = 1960462828828148790ULL;
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
