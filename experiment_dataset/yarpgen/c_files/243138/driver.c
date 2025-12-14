#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
long long int var_2 = 5610020382803707850LL;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-30408;
unsigned long long int var_8 = 5284836497865890368ULL;
int var_9 = -1212706146;
signed char var_11 = (signed char)68;
int zero = 0;
int var_12 = -234220495;
unsigned long long int var_13 = 9140436547604653375ULL;
short var_14 = (short)-16984;
long long int var_15 = -7838336608459827709LL;
long long int var_16 = -3162731799132524316LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
