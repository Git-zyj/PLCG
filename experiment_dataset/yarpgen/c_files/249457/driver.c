#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)70;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)161;
long long int var_6 = -8931168141349885626LL;
short var_7 = (short)-24222;
_Bool var_9 = (_Bool)1;
int var_14 = 151137972;
int zero = 0;
short var_16 = (short)26727;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)34;
unsigned long long int var_20 = 10646784524039517039ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
