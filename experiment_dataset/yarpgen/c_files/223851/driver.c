#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3243436355U;
int var_5 = 163331567;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1823366090990321244LL;
unsigned int var_8 = 3492445491U;
unsigned int var_9 = 3412000751U;
signed char var_11 = (signed char)-117;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -565040141;
unsigned char var_14 = (unsigned char)112;
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
