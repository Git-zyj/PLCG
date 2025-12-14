#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
signed char var_5 = (signed char)120;
int var_6 = 1107803279;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 3221746413U;
unsigned int var_13 = 3346679163U;
unsigned long long int var_16 = 1875560689380858673ULL;
int zero = 0;
unsigned long long int var_17 = 9763131365226598128ULL;
_Bool var_18 = (_Bool)1;
int var_19 = -1260611254;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
