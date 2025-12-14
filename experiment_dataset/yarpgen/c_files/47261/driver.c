#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8012671793658781148LL;
short var_2 = (short)15475;
int var_3 = 1777940494;
unsigned short var_4 = (unsigned short)13148;
int var_5 = 2121760132;
int var_7 = -911540985;
unsigned long long int var_8 = 1073304247011254787ULL;
unsigned char var_9 = (unsigned char)35;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
