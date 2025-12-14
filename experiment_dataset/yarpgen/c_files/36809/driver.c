#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14553;
unsigned int var_3 = 922511186U;
unsigned char var_4 = (unsigned char)126;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)105;
signed char var_7 = (signed char)30;
unsigned int var_8 = 2489523967U;
long long int var_9 = 7619971653855513512LL;
int zero = 0;
signed char var_11 = (signed char)107;
unsigned char var_12 = (unsigned char)67;
int var_13 = -49626086;
signed char var_14 = (signed char)-37;
int var_15 = 1840755460;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
