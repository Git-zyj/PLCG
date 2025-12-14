#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6014454997113143783LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 15305406714146690084ULL;
unsigned short var_8 = (unsigned short)18902;
unsigned long long int var_9 = 5937421332096647365ULL;
unsigned short var_12 = (unsigned short)36422;
int zero = 0;
unsigned long long int var_13 = 13520934712244739038ULL;
unsigned long long int var_14 = 3571690435476404200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
