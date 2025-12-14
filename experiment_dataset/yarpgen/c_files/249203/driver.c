#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-113;
short var_3 = (short)-31979;
_Bool var_6 = (_Bool)1;
int var_7 = 859351460;
unsigned long long int var_8 = 8065344019674158389ULL;
unsigned int var_9 = 1098067037U;
unsigned int var_10 = 3749476575U;
int zero = 0;
long long int var_16 = 4187440711823983499LL;
unsigned short var_17 = (unsigned short)59241;
long long int var_18 = -19737038871507665LL;
unsigned short var_19 = (unsigned short)35672;
void init() {
}

void checksum() {
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
