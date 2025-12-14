#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13080455242262691565ULL;
unsigned long long int var_1 = 18109053338042571124ULL;
signed char var_3 = (signed char)48;
signed char var_4 = (signed char)110;
short var_5 = (short)-8906;
_Bool var_7 = (_Bool)0;
int var_8 = 480682443;
short var_9 = (short)11849;
unsigned long long int var_10 = 9361309895047110627ULL;
unsigned long long int var_11 = 4259734139949154165ULL;
int zero = 0;
unsigned long long int var_13 = 5017186726152399026ULL;
long long int var_14 = -5019841561174969632LL;
long long int var_15 = -5055872297360826640LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
