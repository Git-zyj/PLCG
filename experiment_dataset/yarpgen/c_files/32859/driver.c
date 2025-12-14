#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2474254259U;
int var_1 = -2116204750;
unsigned int var_5 = 1082386859U;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-9;
unsigned short var_13 = (unsigned short)21388;
int var_16 = -1022510128;
int zero = 0;
unsigned int var_17 = 333877113U;
signed char var_18 = (signed char)-27;
unsigned long long int var_19 = 5217129325550557741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
