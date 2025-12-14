#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)125;
signed char var_10 = (signed char)-72;
unsigned char var_16 = (unsigned char)202;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)251;
short var_21 = (short)-25701;
signed char var_22 = (signed char)27;
long long int var_23 = -9030835670912535462LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
