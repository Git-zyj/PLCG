#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12012601124805504166ULL;
signed char var_2 = (signed char)-50;
int var_4 = -520453079;
short var_9 = (short)29772;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)28933;
unsigned char var_17 = (unsigned char)180;
int var_18 = 1910496870;
int zero = 0;
signed char var_19 = (signed char)29;
unsigned long long int var_20 = 16553832597127047540ULL;
short var_21 = (short)-19173;
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
