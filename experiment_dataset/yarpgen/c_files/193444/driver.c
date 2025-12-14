#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
unsigned int var_2 = 275378296U;
long long int var_3 = 4396861381535462297LL;
signed char var_4 = (signed char)-109;
short var_7 = (short)-26251;
unsigned short var_10 = (unsigned short)15889;
unsigned int var_13 = 2246667682U;
signed char var_15 = (signed char)123;
int zero = 0;
long long int var_17 = 3002336416525179871LL;
unsigned int var_18 = 1055044029U;
unsigned short var_19 = (unsigned short)32964;
short var_20 = (short)27221;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
