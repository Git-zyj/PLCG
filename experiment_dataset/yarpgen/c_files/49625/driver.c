#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
long long int var_4 = -2932746011733081415LL;
signed char var_9 = (signed char)98;
signed char var_13 = (signed char)113;
unsigned long long int var_17 = 16080963532707376500ULL;
int zero = 0;
long long int var_20 = 2405360926087607381LL;
long long int var_21 = 990393674010077972LL;
int var_22 = 191232089;
signed char var_23 = (signed char)-120;
signed char var_24 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
