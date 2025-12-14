#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
unsigned int var_2 = 2580898752U;
_Bool var_3 = (_Bool)1;
int var_4 = 253957015;
signed char var_5 = (signed char)-114;
signed char var_6 = (signed char)124;
long long int var_7 = 794130810452173054LL;
unsigned int var_8 = 3877919427U;
unsigned char var_9 = (unsigned char)231;
int var_11 = 822103899;
int zero = 0;
long long int var_12 = -2222510726003175443LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
