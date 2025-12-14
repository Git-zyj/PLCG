#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3074532882U;
unsigned int var_5 = 394581887U;
unsigned int var_6 = 2290193197U;
unsigned char var_8 = (unsigned char)82;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)14545;
unsigned int var_12 = 965071905U;
int var_13 = 2003393318;
unsigned int var_14 = 3837798077U;
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
