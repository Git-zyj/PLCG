#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1583984832;
unsigned long long int var_4 = 932024334897674045ULL;
unsigned long long int var_7 = 17785882563503903291ULL;
signed char var_10 = (signed char)-65;
unsigned long long int var_11 = 3245129250791894179ULL;
unsigned char var_12 = (unsigned char)163;
signed char var_13 = (signed char)-33;
unsigned long long int var_14 = 4728884357327915295ULL;
short var_15 = (short)-6844;
int zero = 0;
unsigned short var_16 = (unsigned short)9241;
int var_17 = 922678535;
short var_18 = (short)-26848;
long long int var_19 = -2172154821220193690LL;
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
