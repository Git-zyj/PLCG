#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3353898200313201516LL;
long long int var_2 = -2403327182424660430LL;
int var_3 = -471989547;
unsigned long long int var_4 = 10346581200250141978ULL;
long long int var_6 = 3537801598803582672LL;
unsigned long long int var_12 = 2169343567085202371ULL;
long long int var_16 = 2908646840110656393LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)154;
unsigned int var_19 = 320049679U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
