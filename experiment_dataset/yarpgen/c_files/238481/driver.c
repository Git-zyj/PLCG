#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13642134603156600129ULL;
unsigned long long int var_2 = 15438547193754477191ULL;
unsigned char var_4 = (unsigned char)160;
unsigned long long int var_5 = 15401170115388609001ULL;
unsigned int var_6 = 4294069151U;
signed char var_8 = (signed char)105;
int var_9 = 1815564017;
long long int var_10 = 6612875071476595084LL;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_16 = (short)-8638;
int zero = 0;
int var_18 = -1106417276;
signed char var_19 = (signed char)77;
unsigned long long int var_20 = 15425977484408002161ULL;
short var_21 = (short)13342;
void init() {
}

void checksum() {
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
