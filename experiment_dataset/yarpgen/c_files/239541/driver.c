#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9947;
short var_2 = (short)-2765;
_Bool var_10 = (_Bool)1;
int var_12 = -1520182504;
int zero = 0;
signed char var_19 = (signed char)-74;
long long int var_20 = -1305808478048692592LL;
long long int var_21 = -2721522955817015368LL;
unsigned int var_22 = 516772138U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
