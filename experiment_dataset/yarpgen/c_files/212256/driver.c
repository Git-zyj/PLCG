#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2876817694U;
int var_2 = 1834275039;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 1211674882U;
unsigned int var_14 = 3971498861U;
unsigned int var_15 = 3114686429U;
int zero = 0;
unsigned long long int var_17 = 15709847192736719462ULL;
int var_18 = 354490115;
short var_19 = (short)20396;
void init() {
}

void checksum() {
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
