#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12013460052517653414ULL;
short var_5 = (short)-11108;
int var_7 = 224363185;
unsigned long long int var_8 = 13700773559378691039ULL;
long long int var_13 = -5324089426871390182LL;
unsigned long long int var_15 = 8325632605007889127ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)36689;
signed char var_20 = (signed char)-90;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)54647;
unsigned int var_23 = 1331229131U;
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
