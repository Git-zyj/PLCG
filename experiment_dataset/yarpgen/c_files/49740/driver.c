#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2099659885672512839LL;
unsigned int var_2 = 1574125661U;
short var_6 = (short)-27673;
_Bool var_7 = (_Bool)1;
int var_11 = -1435874069;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 9195244186554421086ULL;
short var_16 = (short)-31613;
int var_17 = 2065755626;
unsigned int var_18 = 2935652019U;
long long int var_19 = -6976466044874840433LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
