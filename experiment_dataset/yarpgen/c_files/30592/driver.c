#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
signed char var_2 = (signed char)91;
short var_4 = (short)-4202;
signed char var_5 = (signed char)-125;
unsigned long long int var_9 = 5029630305596913653ULL;
unsigned short var_12 = (unsigned short)52393;
long long int var_13 = 6058287064511632480LL;
short var_17 = (short)-8204;
signed char var_18 = (signed char)31;
int zero = 0;
signed char var_19 = (signed char)16;
short var_20 = (short)-21027;
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
