#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62353;
long long int var_2 = -4911095717709461526LL;
long long int var_4 = 6701835749877406063LL;
long long int var_5 = -7315204977845608985LL;
long long int var_7 = -539404608486435817LL;
unsigned short var_12 = (unsigned short)40927;
long long int var_15 = -1589626058008074466LL;
int zero = 0;
unsigned long long int var_20 = 6482575986417630098ULL;
unsigned long long int var_21 = 1068182808530441784ULL;
long long int var_22 = 1077618913179100492LL;
long long int var_23 = -1232786467878283989LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
