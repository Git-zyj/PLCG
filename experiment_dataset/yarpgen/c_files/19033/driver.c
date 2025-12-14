#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 752491398;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)64134;
signed char var_4 = (signed char)-92;
unsigned int var_5 = 2871048682U;
unsigned int var_6 = 2231531408U;
int var_7 = -146071397;
unsigned long long int var_9 = 5016031729330588826ULL;
signed char var_10 = (signed char)-78;
signed char var_11 = (signed char)15;
int var_13 = -568870593;
long long int var_15 = -4222399081016780866LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1971887813U;
_Bool var_18 = (_Bool)1;
int var_19 = -807760828;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
