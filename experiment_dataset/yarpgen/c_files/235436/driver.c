#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)1;
long long int var_7 = 656688117422010018LL;
int var_8 = 635937068;
unsigned int var_10 = 2809975936U;
int var_11 = 786473677;
unsigned int var_13 = 3420361975U;
int zero = 0;
int var_18 = 485662786;
int var_19 = 595609296;
long long int var_20 = 6822322414775348984LL;
unsigned long long int var_21 = 13713057674669696757ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
