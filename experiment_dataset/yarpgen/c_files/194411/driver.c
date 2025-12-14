#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
signed char var_2 = (signed char)80;
unsigned long long int var_3 = 14536775250996198288ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 11407774223726437080ULL;
unsigned int var_9 = 840784782U;
signed char var_10 = (signed char)72;
unsigned long long int var_12 = 12340271497389018267ULL;
int zero = 0;
short var_16 = (short)-31647;
unsigned char var_17 = (unsigned char)44;
signed char var_18 = (signed char)-56;
_Bool var_19 = (_Bool)1;
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
