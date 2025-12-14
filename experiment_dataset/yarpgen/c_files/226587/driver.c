#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28604;
unsigned short var_2 = (unsigned short)17183;
unsigned long long int var_4 = 4205651910214059728ULL;
unsigned long long int var_5 = 7560463966991113561ULL;
unsigned long long int var_8 = 6840469161737521961ULL;
int var_9 = 2036421299;
unsigned long long int var_10 = 18369361069879707224ULL;
unsigned short var_11 = (unsigned short)16009;
int var_13 = 384516222;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-21;
short var_16 = (short)22651;
void init() {
}

void checksum() {
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
