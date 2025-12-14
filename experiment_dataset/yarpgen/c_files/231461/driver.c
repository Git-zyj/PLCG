#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned short var_1 = (unsigned short)34373;
int var_3 = -783134373;
long long int var_5 = 5225609651372240800LL;
unsigned short var_6 = (unsigned short)36911;
unsigned long long int var_8 = 17713009923982073901ULL;
long long int var_9 = -3373922699081931336LL;
int zero = 0;
long long int var_10 = -3067381940351302884LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 86862178U;
long long int var_13 = -2792136067800375700LL;
int var_14 = 1318223099;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
