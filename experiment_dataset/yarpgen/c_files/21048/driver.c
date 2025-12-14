#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -779583139;
unsigned long long int var_2 = 5252785209495140812ULL;
long long int var_3 = 4149811531063414596LL;
long long int var_4 = -2872558354131841744LL;
unsigned int var_7 = 2298379244U;
signed char var_9 = (signed char)-77;
unsigned int var_10 = 1700456669U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_19 = -122096952916656135LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-11631;
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
