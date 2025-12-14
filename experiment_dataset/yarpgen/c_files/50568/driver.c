#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5932601549404067586LL;
unsigned short var_2 = (unsigned short)37263;
long long int var_4 = -4740006523462151759LL;
long long int var_8 = -8063833824128678757LL;
unsigned long long int var_10 = 7037698187357308253ULL;
int var_11 = -1250983919;
int zero = 0;
unsigned long long int var_13 = 16921860433805382632ULL;
int var_14 = 328221739;
void init() {
}

void checksum() {
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
