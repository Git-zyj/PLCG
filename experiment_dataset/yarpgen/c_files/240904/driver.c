#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -402876778;
unsigned long long int var_3 = 12119466800936059291ULL;
short var_5 = (short)-2862;
long long int var_6 = 4779995842744691799LL;
unsigned int var_7 = 3966218999U;
unsigned long long int var_8 = 13773440865202356776ULL;
int var_9 = -56272458;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -1310280122;
long long int var_14 = -1868271482371839795LL;
int var_15 = 500783844;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
