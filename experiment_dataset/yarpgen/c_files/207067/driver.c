#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4390571997207768929ULL;
unsigned char var_2 = (unsigned char)38;
unsigned char var_7 = (unsigned char)19;
_Bool var_16 = (_Bool)0;
short var_18 = (short)-10251;
unsigned char var_19 = (unsigned char)86;
int zero = 0;
long long int var_20 = 7574759895824883454LL;
unsigned int var_21 = 1883724128U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
