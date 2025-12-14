#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1966935795536509698ULL;
unsigned long long int var_2 = 9193546175588333051ULL;
signed char var_4 = (signed char)2;
short var_7 = (short)-25289;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-44;
signed char var_17 = (signed char)-29;
short var_18 = (short)-31645;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
