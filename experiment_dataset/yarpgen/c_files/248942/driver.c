#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8978873650771029765LL;
long long int var_9 = 1188036546866037742LL;
unsigned int var_10 = 1622175549U;
signed char var_12 = (signed char)12;
unsigned char var_13 = (unsigned char)195;
unsigned int var_14 = 1937912247U;
signed char var_15 = (signed char)68;
int zero = 0;
unsigned char var_19 = (unsigned char)141;
unsigned short var_20 = (unsigned short)10700;
signed char var_21 = (signed char)95;
unsigned long long int var_22 = 5121440965969636482ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
