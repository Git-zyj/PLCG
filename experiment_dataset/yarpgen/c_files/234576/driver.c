#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
unsigned long long int var_6 = 7587146086309104504ULL;
int var_7 = -18349270;
unsigned long long int var_9 = 13846604006132254109ULL;
int zero = 0;
unsigned long long int var_10 = 8439411838547806333ULL;
unsigned char var_11 = (unsigned char)226;
unsigned char var_12 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
