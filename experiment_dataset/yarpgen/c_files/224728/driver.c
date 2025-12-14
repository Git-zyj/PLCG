#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28104;
_Bool var_2 = (_Bool)1;
short var_5 = (short)25155;
unsigned short var_7 = (unsigned short)8103;
long long int var_8 = -6105107942921581960LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)11242;
short var_13 = (short)26730;
long long int var_14 = 731337387299682738LL;
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
