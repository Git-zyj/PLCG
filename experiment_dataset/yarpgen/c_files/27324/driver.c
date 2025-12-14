#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43504;
signed char var_2 = (signed char)-43;
unsigned long long int var_3 = 2598393177359981190ULL;
_Bool var_8 = (_Bool)1;
int var_9 = 487986717;
signed char var_13 = (signed char)9;
int zero = 0;
unsigned long long int var_15 = 5171800190111475546ULL;
signed char var_16 = (signed char)108;
void init() {
}

void checksum() {
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
