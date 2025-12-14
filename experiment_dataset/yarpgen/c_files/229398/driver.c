#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1926263162;
unsigned int var_1 = 3534550435U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2442768120U;
long long int var_5 = -4032419681406279280LL;
unsigned long long int var_8 = 13189690922787625787ULL;
unsigned long long int var_9 = 15968795162031375974ULL;
unsigned long long int var_11 = 7160402614036428855ULL;
short var_12 = (short)-5348;
unsigned long long int var_14 = 4885582480889693004ULL;
unsigned short var_18 = (unsigned short)57878;
int zero = 0;
unsigned int var_19 = 2548504148U;
short var_20 = (short)32205;
unsigned char var_21 = (unsigned char)57;
short var_22 = (short)-23835;
short var_23 = (short)-12922;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
