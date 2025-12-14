#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60009;
int var_2 = -856705903;
signed char var_9 = (signed char)-58;
long long int var_11 = -8348701360149234238LL;
unsigned int var_13 = 1645868089U;
unsigned short var_14 = (unsigned short)19391;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4918642916901442787LL;
signed char var_17 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
