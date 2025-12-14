#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
_Bool var_2 = (_Bool)1;
long long int var_5 = -8812689414368773607LL;
signed char var_6 = (signed char)103;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_12 = (short)-31370;
signed char var_13 = (signed char)84;
long long int var_18 = 4647485463408100865LL;
int zero = 0;
unsigned int var_19 = 2420263217U;
int var_20 = -1243833124;
int var_21 = -884997413;
signed char var_22 = (signed char)48;
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
