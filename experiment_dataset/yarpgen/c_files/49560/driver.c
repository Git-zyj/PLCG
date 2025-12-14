#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)675;
int var_2 = 2077767773;
long long int var_4 = -3472683860003891472LL;
unsigned int var_5 = 1222601458U;
long long int var_6 = 4778730840192407815LL;
unsigned char var_8 = (unsigned char)142;
unsigned char var_10 = (unsigned char)110;
int zero = 0;
long long int var_11 = 2916426484421227404LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)25856;
void init() {
}

void checksum() {
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
