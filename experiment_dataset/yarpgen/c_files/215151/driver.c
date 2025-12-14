#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1588176094U;
long long int var_4 = 677481388959093698LL;
signed char var_5 = (signed char)38;
int var_9 = -1544758903;
unsigned int var_10 = 877171983U;
signed char var_11 = (signed char)-90;
int zero = 0;
unsigned int var_12 = 924329565U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3399247711U;
unsigned int var_15 = 2663144138U;
unsigned int var_16 = 23578420U;
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
