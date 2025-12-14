#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2481280430U;
unsigned int var_2 = 3342653700U;
signed char var_3 = (signed char)-107;
signed char var_5 = (signed char)65;
signed char var_6 = (signed char)-124;
long long int var_7 = 8079831742969493472LL;
long long int var_9 = -689776470031971191LL;
unsigned int var_10 = 853934757U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-124;
unsigned long long int var_14 = 6570509251981420401ULL;
int zero = 0;
long long int var_16 = 6015353922213130208LL;
unsigned char var_17 = (unsigned char)150;
long long int var_18 = 1791116358631065401LL;
long long int var_19 = -533946902323634678LL;
long long int var_20 = 3370504641925557572LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
