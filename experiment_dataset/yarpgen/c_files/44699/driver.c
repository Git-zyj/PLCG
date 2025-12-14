#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1673645143714181790LL;
long long int var_5 = -6720067947090690981LL;
signed char var_6 = (signed char)26;
short var_9 = (short)24566;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2952023577667004004ULL;
unsigned short var_12 = (unsigned short)35532;
short var_13 = (short)5387;
unsigned char var_15 = (unsigned char)117;
unsigned char var_16 = (unsigned char)82;
int zero = 0;
unsigned long long int var_17 = 852660126108727375ULL;
short var_18 = (short)-26342;
signed char var_19 = (signed char)-104;
_Bool var_20 = (_Bool)0;
long long int var_21 = 1461778500346308049LL;
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
