#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -6439128230552533051LL;
long long int var_12 = -2487193825878370905LL;
int var_13 = 1744281619;
unsigned int var_14 = 1903941971U;
int zero = 0;
unsigned short var_16 = (unsigned short)17793;
unsigned long long int var_17 = 4736626554998382374ULL;
short var_18 = (short)32143;
signed char var_19 = (signed char)-58;
signed char var_20 = (signed char)7;
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
