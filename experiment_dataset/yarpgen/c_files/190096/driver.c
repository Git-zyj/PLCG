#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1531998790U;
long long int var_2 = 8307922790935064140LL;
unsigned short var_3 = (unsigned short)4268;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)216;
unsigned char var_9 = (unsigned char)23;
short var_12 = (short)18753;
int zero = 0;
long long int var_13 = -1099531938990130530LL;
unsigned short var_14 = (unsigned short)9878;
int var_15 = 1940604682;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
