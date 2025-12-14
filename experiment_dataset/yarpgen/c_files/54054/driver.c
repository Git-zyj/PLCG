#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
signed char var_1 = (signed char)44;
short var_2 = (short)26383;
unsigned long long int var_3 = 6855687806502568834ULL;
unsigned int var_5 = 3556611704U;
unsigned int var_7 = 1172128965U;
short var_8 = (short)14964;
short var_9 = (short)21436;
unsigned long long int var_11 = 5681430139839010679ULL;
short var_14 = (short)-12628;
short var_15 = (short)11111;
int zero = 0;
long long int var_16 = 8147876775564719854LL;
unsigned int var_17 = 3619397271U;
long long int var_18 = -6910691757099157151LL;
short var_19 = (short)4521;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
