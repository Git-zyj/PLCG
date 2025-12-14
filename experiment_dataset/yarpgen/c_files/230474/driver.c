#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4925863498346384323LL;
long long int var_2 = -3200972435759249068LL;
unsigned long long int var_4 = 7718794691394185751ULL;
signed char var_5 = (signed char)108;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-105;
_Bool var_13 = (_Bool)1;
int var_14 = 61616214;
long long int var_15 = -7269604480076122015LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-17;
unsigned long long int var_18 = 7562168188954814343ULL;
short var_19 = (short)11319;
int var_20 = -301738187;
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
