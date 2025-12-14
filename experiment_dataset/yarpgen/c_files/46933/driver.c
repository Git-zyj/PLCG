#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3430782866U;
short var_3 = (short)18430;
signed char var_4 = (signed char)-23;
signed char var_9 = (signed char)-41;
unsigned int var_10 = 3911391006U;
unsigned short var_17 = (unsigned short)50850;
unsigned long long int var_18 = 11614530797720900690ULL;
int zero = 0;
long long int var_19 = 7188181064845275784LL;
short var_20 = (short)12014;
unsigned long long int var_21 = 6894581126786970342ULL;
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
