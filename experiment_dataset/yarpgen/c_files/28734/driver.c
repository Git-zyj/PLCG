#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1676302702U;
long long int var_1 = -379734185512252320LL;
short var_2 = (short)-27547;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3559066350U;
long long int var_7 = -4756417376108094231LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2665589186726026772LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8941437223918887346LL;
short var_14 = (short)-27657;
short var_15 = (short)-26644;
unsigned long long int var_16 = 4934201849565677621ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
