#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10425811087248641043ULL;
short var_1 = (short)23927;
unsigned long long int var_2 = 325414880431767205ULL;
signed char var_3 = (signed char)-82;
unsigned int var_9 = 3606660946U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-22856;
unsigned short var_22 = (unsigned short)26983;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
