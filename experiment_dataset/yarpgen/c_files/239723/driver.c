#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2415878090443873748ULL;
short var_9 = (short)5735;
unsigned short var_12 = (unsigned short)46192;
signed char var_18 = (signed char)9;
int zero = 0;
unsigned short var_20 = (unsigned short)50549;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 383137689U;
signed char var_23 = (signed char)-77;
void init() {
}

void checksum() {
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
