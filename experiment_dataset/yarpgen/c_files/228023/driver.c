#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17587;
unsigned short var_4 = (unsigned short)36843;
signed char var_5 = (signed char)-13;
unsigned long long int var_6 = 10906019341484636553ULL;
long long int var_7 = 7987392238260204859LL;
long long int var_9 = 5925053237452501388LL;
unsigned short var_10 = (unsigned short)14783;
int zero = 0;
unsigned long long int var_17 = 17228132432666114626ULL;
short var_18 = (short)-28730;
long long int var_19 = 2470578267164425115LL;
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
