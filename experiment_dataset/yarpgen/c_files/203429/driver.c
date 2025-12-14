#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5064929835071469800LL;
int var_2 = -1670941162;
short var_3 = (short)17576;
signed char var_4 = (signed char)-112;
signed char var_6 = (signed char)98;
signed char var_7 = (signed char)-9;
int var_8 = -1367939162;
signed char var_9 = (signed char)20;
int zero = 0;
long long int var_10 = -7260547551653705292LL;
unsigned int var_11 = 3633778331U;
short var_12 = (short)15163;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)151;
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
