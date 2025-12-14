#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1771347207U;
unsigned long long int var_8 = 12014007269061322475ULL;
unsigned short var_9 = (unsigned short)27217;
unsigned char var_11 = (unsigned char)36;
int zero = 0;
int var_12 = -763372392;
_Bool var_13 = (_Bool)1;
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
