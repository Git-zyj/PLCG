#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18372;
unsigned char var_4 = (unsigned char)197;
signed char var_5 = (signed char)106;
signed char var_7 = (signed char)-58;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3950786235U;
long long int var_10 = -6312976658056043031LL;
long long int var_11 = -6879801535135240049LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)59;
void init() {
}

void checksum() {
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
