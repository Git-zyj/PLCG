#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25431;
long long int var_1 = 1395913448658381945LL;
unsigned short var_5 = (unsigned short)42371;
long long int var_8 = -1827777103248218255LL;
unsigned long long int var_9 = 9968031304733405023ULL;
short var_10 = (short)-14636;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2733949486033653298ULL;
int var_13 = 1772167177;
unsigned char var_16 = (unsigned char)244;
int zero = 0;
short var_18 = (short)12370;
signed char var_19 = (signed char)20;
void init() {
}

void checksum() {
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
