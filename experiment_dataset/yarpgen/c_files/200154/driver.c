#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned long long int var_2 = 5238693402345910170ULL;
short var_5 = (short)8896;
signed char var_6 = (signed char)-71;
unsigned long long int var_7 = 7041170452285716478ULL;
unsigned long long int var_8 = 7615868391346510790ULL;
unsigned long long int var_9 = 10586502589709436947ULL;
long long int var_10 = -3403853731316117246LL;
long long int var_11 = -597920132390310281LL;
short var_12 = (short)2446;
int zero = 0;
unsigned long long int var_13 = 16942063287596602919ULL;
unsigned long long int var_14 = 17691998230904813707ULL;
unsigned long long int var_15 = 11247605583551571888ULL;
unsigned long long int var_16 = 926799258039227722ULL;
signed char var_17 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
