#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3857814329712474358LL;
unsigned short var_4 = (unsigned short)58049;
unsigned long long int var_9 = 17843940809627679934ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)56309;
signed char var_19 = (signed char)34;
unsigned short var_20 = (unsigned short)60635;
void init() {
}

void checksum() {
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
