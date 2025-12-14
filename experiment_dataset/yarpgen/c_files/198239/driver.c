#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28115;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 713152273U;
signed char var_8 = (signed char)-73;
unsigned int var_12 = 3249440349U;
int zero = 0;
long long int var_18 = -3359502890172657809LL;
signed char var_19 = (signed char)-3;
void init() {
}

void checksum() {
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
