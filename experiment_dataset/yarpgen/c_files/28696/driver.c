#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3426428304U;
unsigned long long int var_4 = 7233461327313243821ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-116;
long long int var_8 = 8202226716898684771LL;
int zero = 0;
long long int var_12 = 2435002540835454828LL;
long long int var_13 = -6632393621875853441LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2377446046930596703LL;
unsigned char var_16 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
