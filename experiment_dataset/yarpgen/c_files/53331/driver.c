#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 125560717U;
unsigned short var_8 = (unsigned short)46277;
long long int var_11 = -1251417570365652830LL;
unsigned int var_13 = 1070510102U;
int zero = 0;
short var_16 = (short)-21450;
unsigned long long int var_17 = 4696150029687888841ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 17499336395997715947ULL;
unsigned long long int var_20 = 647032806397942013ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
