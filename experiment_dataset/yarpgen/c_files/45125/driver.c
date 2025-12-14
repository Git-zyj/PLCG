#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)83;
short var_9 = (short)20965;
int var_10 = -1356315168;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)105;
unsigned char var_17 = (unsigned char)202;
int zero = 0;
short var_18 = (short)31878;
signed char var_19 = (signed char)-32;
int var_20 = 933574262;
signed char var_21 = (signed char)43;
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
