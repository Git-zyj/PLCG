#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 596057090;
long long int var_3 = 2661130963111033811LL;
unsigned long long int var_13 = 4334046061745390644ULL;
unsigned long long int var_14 = 8046769326152878732ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 6459248805776358445ULL;
short var_19 = (short)-31445;
int var_20 = -1382585595;
signed char var_21 = (signed char)-13;
unsigned long long int var_22 = 8272606413476258168ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
