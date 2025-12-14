#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)-25;
unsigned short var_5 = (unsigned short)8145;
long long int var_6 = -2193009754398824309LL;
long long int var_8 = -9110592414584016613LL;
short var_9 = (short)-1156;
long long int var_10 = -9072068417692875864LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-1349;
long long int var_15 = -5779962986165778387LL;
unsigned int var_16 = 3713903932U;
unsigned short var_17 = (unsigned short)25157;
unsigned int var_18 = 29341537U;
unsigned int var_19 = 288623146U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
