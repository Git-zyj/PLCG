#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11515313838317372508ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)20687;
unsigned long long int var_6 = 4139763633692554433ULL;
long long int var_7 = -5508317572071045172LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 11221099091813681320ULL;
int var_11 = -1871227771;
unsigned long long int var_12 = 2957092150488202334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
