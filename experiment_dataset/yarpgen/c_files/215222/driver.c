#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31830;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)138;
long long int var_6 = 4565716388188981625LL;
unsigned long long int var_8 = 14153283097164812898ULL;
int zero = 0;
unsigned long long int var_10 = 6708732981709562080ULL;
short var_11 = (short)-20721;
int var_12 = 1940353863;
unsigned long long int var_13 = 15255252475991046578ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
