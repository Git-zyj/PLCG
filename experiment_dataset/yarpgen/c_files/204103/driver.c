#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1393335395953180379LL;
long long int var_7 = -2879103246999397048LL;
int var_8 = -1766711396;
short var_10 = (short)-20687;
unsigned short var_13 = (unsigned short)8501;
unsigned long long int var_15 = 5154883688246320561ULL;
int zero = 0;
long long int var_18 = -4923424942402527456LL;
long long int var_19 = 834303981656670065LL;
unsigned char var_20 = (unsigned char)114;
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
