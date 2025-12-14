#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
long long int var_4 = -2567135926946649058LL;
unsigned int var_6 = 1496080891U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)20407;
signed char var_9 = (signed char)-102;
unsigned long long int var_10 = 7875907179928125996ULL;
unsigned int var_11 = 1424740595U;
unsigned long long int var_13 = 6141664108539265911ULL;
unsigned int var_14 = 174248811U;
int zero = 0;
unsigned long long int var_17 = 14276501416106862880ULL;
signed char var_18 = (signed char)-98;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
long long int var_21 = -9174001144329261390LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
