#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5071722655799165278LL;
long long int var_2 = 4220735907607774147LL;
int var_3 = 421566;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 8791267207934959883ULL;
long long int var_11 = 1780267906398594414LL;
unsigned char var_13 = (unsigned char)144;
int zero = 0;
unsigned char var_14 = (unsigned char)59;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-3;
int var_17 = 53884966;
short var_18 = (short)-15178;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
