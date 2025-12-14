#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3648162887U;
short var_2 = (short)8633;
int var_5 = -174350183;
unsigned long long int var_7 = 11763866953156211499ULL;
unsigned char var_8 = (unsigned char)163;
long long int var_9 = 5806788772409404461LL;
unsigned long long int var_11 = 9788398654473988579ULL;
unsigned long long int var_12 = 6753407359297024346ULL;
int zero = 0;
signed char var_13 = (signed char)-75;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)23;
short var_16 = (short)26900;
long long int var_17 = -4156346371726510598LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
