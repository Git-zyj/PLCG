#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5271582041130297601LL;
int var_2 = 1317422439;
long long int var_4 = 4734203666384560168LL;
unsigned char var_6 = (unsigned char)146;
signed char var_9 = (signed char)-85;
short var_11 = (short)-5287;
signed char var_12 = (signed char)(-127 - 1);
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 6190045576984273424LL;
unsigned int var_18 = 2733494930U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
