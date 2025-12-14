#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1289174107U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 14604547984315290199ULL;
unsigned char var_13 = (unsigned char)142;
int zero = 0;
short var_17 = (short)20724;
unsigned int var_18 = 3822352898U;
unsigned long long int var_19 = 9772234388428970368ULL;
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
