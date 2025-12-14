#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)74;
unsigned char var_5 = (unsigned char)172;
short var_7 = (short)26765;
int var_11 = -2310105;
long long int var_13 = -4586401418886795326LL;
unsigned int var_16 = 1198592278U;
int zero = 0;
signed char var_17 = (signed char)18;
unsigned int var_18 = 11657263U;
unsigned short var_19 = (unsigned short)64248;
unsigned short var_20 = (unsigned short)43490;
unsigned long long int var_21 = 10649101323812675398ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
