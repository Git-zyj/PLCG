#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63361;
unsigned int var_1 = 1686982904U;
unsigned int var_2 = 4293927315U;
unsigned long long int var_3 = 608082787038886474ULL;
int var_5 = -1435506433;
unsigned short var_8 = (unsigned short)15006;
short var_9 = (short)25578;
unsigned long long int var_10 = 17373165897477986559ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)4;
unsigned char var_14 = (unsigned char)85;
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
