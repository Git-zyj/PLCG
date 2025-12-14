#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6769;
int var_10 = 572126697;
unsigned char var_11 = (unsigned char)195;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-11907;
unsigned char var_14 = (unsigned char)88;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)30;
short var_19 = (short)-16169;
unsigned long long int var_20 = 4843885774546294878ULL;
short var_21 = (short)-5411;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
