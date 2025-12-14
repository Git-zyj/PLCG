#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3433520217825844661ULL;
unsigned long long int var_2 = 6935419466780385751ULL;
unsigned int var_3 = 3691609753U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)14908;
long long int var_6 = 7524246889551951966LL;
short var_7 = (short)10601;
int zero = 0;
long long int var_12 = 814074882541392740LL;
unsigned short var_13 = (unsigned short)9031;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
