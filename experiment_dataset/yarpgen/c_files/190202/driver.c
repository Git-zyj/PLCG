#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16785;
unsigned char var_2 = (unsigned char)87;
unsigned short var_3 = (unsigned short)12558;
unsigned long long int var_4 = 3404937738162550956ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)241;
int var_9 = -1407725194;
long long int var_10 = -332167842491742107LL;
unsigned short var_11 = (unsigned short)5004;
long long int var_13 = -1300608718967877342LL;
unsigned short var_14 = (unsigned short)64221;
int zero = 0;
int var_15 = 663578508;
unsigned int var_16 = 1011612014U;
short var_17 = (short)-2416;
unsigned char var_18 = (unsigned char)23;
unsigned long long int var_19 = 11944942831671551769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
