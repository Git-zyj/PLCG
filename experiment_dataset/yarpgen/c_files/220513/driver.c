#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26744;
unsigned long long int var_5 = 11898043191022121729ULL;
unsigned char var_7 = (unsigned char)47;
unsigned long long int var_10 = 16847553310261211109ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)44598;
signed char var_17 = (signed char)-90;
int zero = 0;
int var_19 = 792164484;
int var_20 = -938040260;
void init() {
}

void checksum() {
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
