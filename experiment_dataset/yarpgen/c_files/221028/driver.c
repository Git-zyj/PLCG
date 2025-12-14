#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
long long int var_3 = -4915403498420617019LL;
long long int var_7 = -3803262352114487368LL;
signed char var_10 = (signed char)-3;
unsigned short var_15 = (unsigned short)55820;
short var_16 = (short)21510;
unsigned long long int var_18 = 18386256821655264909ULL;
int zero = 0;
int var_20 = -1613121202;
unsigned long long int var_21 = 10077756304401903059ULL;
unsigned short var_22 = (unsigned short)23822;
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
