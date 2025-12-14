#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -683144345;
long long int var_2 = 8458005490315805043LL;
int var_3 = 1343583670;
short var_4 = (short)26191;
short var_5 = (short)-9707;
signed char var_8 = (signed char)127;
unsigned int var_12 = 4158005975U;
int zero = 0;
unsigned int var_13 = 786458946U;
unsigned short var_14 = (unsigned short)57084;
int var_15 = 2105799270;
int var_16 = -915809425;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
