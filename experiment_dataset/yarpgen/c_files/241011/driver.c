#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8670717351220374538LL;
signed char var_1 = (signed char)66;
short var_2 = (short)-31955;
unsigned char var_3 = (unsigned char)217;
unsigned int var_4 = 771437408U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1512905814U;
long long int var_10 = -5567920535042949261LL;
int zero = 0;
long long int var_12 = 3771962451318338954LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-26555;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
