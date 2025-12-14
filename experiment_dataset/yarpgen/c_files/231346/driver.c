#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4517217355373301131ULL;
unsigned long long int var_2 = 14075013487459737101ULL;
long long int var_4 = -6479794777954114794LL;
unsigned int var_6 = 1151705520U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 4397927452529003024LL;
int zero = 0;
unsigned char var_10 = (unsigned char)72;
unsigned int var_11 = 1458083174U;
short var_12 = (short)12162;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
