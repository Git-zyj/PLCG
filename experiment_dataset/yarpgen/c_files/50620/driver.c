#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)62305;
long long int var_3 = -585010032883160973LL;
int var_4 = -1860366023;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)45;
signed char var_7 = (signed char)111;
short var_10 = (short)6436;
unsigned long long int var_11 = 3437086964749827443ULL;
int zero = 0;
unsigned long long int var_12 = 9378567503015536811ULL;
unsigned long long int var_13 = 16137786607968769334ULL;
int var_14 = -199870264;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
