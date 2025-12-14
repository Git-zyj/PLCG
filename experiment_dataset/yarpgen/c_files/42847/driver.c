#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
short var_3 = (short)22495;
short var_4 = (short)-10217;
unsigned int var_5 = 2621816670U;
short var_8 = (short)-1974;
unsigned long long int var_11 = 16350084554072532107ULL;
unsigned short var_12 = (unsigned short)18682;
unsigned int var_13 = 2565688158U;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -5438902539530016294LL;
short var_16 = (short)-19851;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
