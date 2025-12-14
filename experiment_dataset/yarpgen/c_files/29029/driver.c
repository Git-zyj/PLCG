#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2628111706805050146ULL;
unsigned char var_1 = (unsigned char)126;
unsigned short var_3 = (unsigned short)48907;
unsigned long long int var_6 = 7579804609970254166ULL;
long long int var_8 = -4942315665158833350LL;
short var_10 = (short)-10017;
unsigned short var_12 = (unsigned short)47407;
short var_15 = (short)-30521;
int zero = 0;
signed char var_18 = (signed char)-84;
unsigned long long int var_19 = 13721086732984652238ULL;
unsigned char var_20 = (unsigned char)171;
short var_21 = (short)8065;
long long int var_22 = -5779246877312102392LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
