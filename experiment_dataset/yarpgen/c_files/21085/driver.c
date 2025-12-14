#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7126833582484384954LL;
int var_6 = -1687265392;
unsigned long long int var_12 = 16119637515295328993ULL;
unsigned char var_15 = (unsigned char)23;
signed char var_16 = (signed char)-29;
int zero = 0;
unsigned long long int var_19 = 2909845339626689973ULL;
short var_20 = (short)11172;
void init() {
}

void checksum() {
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
