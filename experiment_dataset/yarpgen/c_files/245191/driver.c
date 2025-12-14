#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2914102661764484895LL;
signed char var_2 = (signed char)-117;
unsigned short var_3 = (unsigned short)17821;
unsigned long long int var_4 = 12895004429050755227ULL;
unsigned int var_8 = 879238904U;
unsigned char var_9 = (unsigned char)100;
int zero = 0;
unsigned int var_12 = 2898461591U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)7816;
void init() {
}

void checksum() {
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
