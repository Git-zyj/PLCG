#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
int var_6 = -659415036;
int var_9 = 1006498176;
unsigned long long int var_12 = 1138749323188856640ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)10906;
signed char var_18 = (signed char)-24;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2688007676U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
