#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5513968936023133523ULL;
signed char var_1 = (signed char)74;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 1750779761853729930ULL;
signed char var_7 = (signed char)0;
signed char var_9 = (signed char)86;
signed char var_10 = (signed char)-66;
unsigned char var_11 = (unsigned char)180;
int zero = 0;
unsigned long long int var_17 = 14111101023182936918ULL;
unsigned long long int var_18 = 1492131159865346308ULL;
long long int var_19 = -5901856577136067928LL;
short var_20 = (short)-19919;
unsigned int var_21 = 976127720U;
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
