#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 477320327U;
unsigned int var_3 = 1803842414U;
int var_5 = -106752826;
unsigned int var_9 = 1588551099U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_17 = (short)-16639;
long long int var_18 = -610700431887721730LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5486961384122408159ULL;
int var_21 = 185727255;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
