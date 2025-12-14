#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6813229350973257592ULL;
short var_2 = (short)20653;
long long int var_3 = -7141507335221475733LL;
long long int var_4 = 3027148288191146786LL;
signed char var_7 = (signed char)-4;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 14422305598854551091ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)21962;
unsigned long long int var_12 = 15011209087919553023ULL;
unsigned long long int var_13 = 16134201516671811663ULL;
void init() {
}

void checksum() {
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
