#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 901321893U;
long long int var_2 = 7046028736103022094LL;
long long int var_5 = 1468431887890685558LL;
unsigned short var_7 = (unsigned short)25547;
signed char var_8 = (signed char)48;
long long int var_13 = 3359328145809529140LL;
short var_14 = (short)-16014;
long long int var_15 = -6412304840002599795LL;
signed char var_16 = (signed char)-125;
int zero = 0;
short var_17 = (short)21452;
unsigned short var_18 = (unsigned short)16818;
signed char var_19 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
