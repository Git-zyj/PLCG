#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3931757671024133403ULL;
short var_2 = (short)1066;
int var_3 = 538973761;
long long int var_6 = -7125046392773854460LL;
unsigned int var_11 = 2453485582U;
unsigned int var_12 = 3805629292U;
int zero = 0;
long long int var_18 = 3963418061769799033LL;
unsigned int var_19 = 2383952582U;
long long int var_20 = 5164982426543358969LL;
unsigned short var_21 = (unsigned short)34021;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
