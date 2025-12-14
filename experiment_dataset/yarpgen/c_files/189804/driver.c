#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7476172364356810169LL;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)63;
int var_9 = -1810371105;
long long int var_12 = 2836588489998235031LL;
int zero = 0;
unsigned long long int var_14 = 10361448121124700704ULL;
int var_15 = -1987771953;
unsigned long long int var_16 = 2522536327218397978ULL;
unsigned short var_17 = (unsigned short)56780;
unsigned int var_18 = 2250904130U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
