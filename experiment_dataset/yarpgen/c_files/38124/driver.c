#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1248155962;
unsigned short var_7 = (unsigned short)60358;
unsigned short var_8 = (unsigned short)21914;
unsigned long long int var_9 = 15157114044413124571ULL;
unsigned long long int var_13 = 3585612920425267877ULL;
int var_15 = -125949319;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 732609824606390277ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
