#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)82;
int var_4 = -2013068886;
short var_7 = (short)-19329;
unsigned short var_8 = (unsigned short)45329;
unsigned long long int var_9 = 1571978983746450687ULL;
int var_11 = 786664269;
signed char var_13 = (signed char)-83;
long long int var_14 = 8557460026777306342LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = 7320902280756547004LL;
signed char var_18 = (signed char)5;
unsigned int var_19 = 2829895897U;
void init() {
}

void checksum() {
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
