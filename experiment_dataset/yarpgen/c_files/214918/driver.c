#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13757;
unsigned long long int var_6 = 2143863851478808435ULL;
long long int var_8 = 5517969698971746228LL;
unsigned short var_10 = (unsigned short)9908;
int var_11 = -1958398511;
short var_14 = (short)25627;
int zero = 0;
signed char var_15 = (signed char)60;
unsigned short var_16 = (unsigned short)49468;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
