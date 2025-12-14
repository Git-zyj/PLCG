#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29354;
int var_3 = -2062477669;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)97;
signed char var_6 = (signed char)-38;
unsigned long long int var_7 = 9023807688971949719ULL;
signed char var_8 = (signed char)97;
int var_9 = 181381134;
unsigned short var_10 = (unsigned short)44002;
int zero = 0;
unsigned int var_11 = 3834584833U;
long long int var_12 = -4942946700293616334LL;
signed char var_13 = (signed char)92;
unsigned int var_14 = 1373651675U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
