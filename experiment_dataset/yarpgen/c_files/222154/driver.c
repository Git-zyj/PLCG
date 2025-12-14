#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9075817259860565681ULL;
unsigned long long int var_7 = 1606139117391041775ULL;
long long int var_9 = 8193556836939261975LL;
unsigned long long int var_15 = 2057974777869695436ULL;
int zero = 0;
unsigned long long int var_20 = 11074134928174799775ULL;
unsigned int var_21 = 2844985526U;
unsigned char var_22 = (unsigned char)63;
unsigned int var_23 = 1098975789U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
