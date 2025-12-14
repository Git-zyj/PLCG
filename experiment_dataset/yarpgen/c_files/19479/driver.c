#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5334;
unsigned short var_1 = (unsigned short)43130;
unsigned short var_2 = (unsigned short)34478;
int var_3 = 1221466322;
signed char var_4 = (signed char)20;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2098301222U;
short var_8 = (short)12739;
unsigned int var_9 = 327909930U;
int zero = 0;
unsigned int var_10 = 1748850917U;
signed char var_11 = (signed char)-33;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
