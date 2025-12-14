#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12553025953630693564ULL;
unsigned short var_4 = (unsigned short)3678;
unsigned char var_11 = (unsigned char)69;
unsigned int var_13 = 3439975126U;
unsigned char var_16 = (unsigned char)113;
int zero = 0;
long long int var_17 = -1387181193535312584LL;
short var_18 = (short)-926;
short var_19 = (short)20467;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11201393578863038498ULL;
unsigned long long int var_22 = 801585044044550793ULL;
short var_23 = (short)24984;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
