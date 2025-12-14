#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
_Bool var_2 = (_Bool)0;
long long int var_5 = -7697288532256359860LL;
unsigned short var_8 = (unsigned short)14037;
signed char var_10 = (signed char)-118;
unsigned char var_15 = (unsigned char)169;
long long int var_17 = -7970551088524455589LL;
short var_18 = (short)30689;
int zero = 0;
unsigned short var_20 = (unsigned short)13141;
signed char var_21 = (signed char)-125;
unsigned short var_22 = (unsigned short)27741;
unsigned char var_23 = (unsigned char)96;
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
