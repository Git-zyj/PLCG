#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7696583775684007389ULL;
unsigned int var_6 = 3534721805U;
_Bool var_9 = (_Bool)0;
int var_10 = -482627134;
int var_11 = 199222174;
short var_12 = (short)12218;
short var_13 = (short)31138;
_Bool var_14 = (_Bool)0;
int var_15 = 1605212473;
int var_17 = -1226535169;
int zero = 0;
unsigned long long int var_19 = 15004942276755083010ULL;
unsigned long long int var_20 = 7574037746372460831ULL;
signed char var_21 = (signed char)34;
void init() {
}

void checksum() {
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
