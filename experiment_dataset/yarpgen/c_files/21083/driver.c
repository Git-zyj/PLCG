#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4219440579U;
short var_2 = (short)31040;
long long int var_12 = 6988268941860584609LL;
unsigned int var_13 = 2285347464U;
long long int var_14 = 4995479777925148740LL;
unsigned int var_15 = 1662820823U;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-72;
unsigned int var_19 = 764711061U;
unsigned int var_20 = 3574040001U;
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
