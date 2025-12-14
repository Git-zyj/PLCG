#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12994889679326503655ULL;
signed char var_9 = (signed char)-105;
unsigned long long int var_10 = 16981931427456670580ULL;
int var_13 = -1089188176;
int zero = 0;
unsigned int var_17 = 3590845152U;
unsigned char var_18 = (unsigned char)60;
signed char var_19 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
