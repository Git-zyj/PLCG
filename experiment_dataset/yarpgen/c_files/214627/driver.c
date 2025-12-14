#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7310527791005158951LL;
signed char var_7 = (signed char)-17;
unsigned long long int var_8 = 11781912667163867308ULL;
short var_10 = (short)-27306;
long long int var_11 = -5260954817043044078LL;
int zero = 0;
unsigned long long int var_17 = 2951684446620304547ULL;
_Bool var_18 = (_Bool)1;
int var_19 = 148104055;
unsigned short var_20 = (unsigned short)28288;
unsigned long long int var_21 = 905989191155818022ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
