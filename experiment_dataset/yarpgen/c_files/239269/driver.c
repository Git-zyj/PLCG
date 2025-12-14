#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
long long int var_2 = 5686018225643557386LL;
signed char var_4 = (signed char)-69;
short var_6 = (short)7127;
int var_9 = 894570167;
unsigned char var_10 = (unsigned char)82;
unsigned int var_11 = 628393361U;
short var_13 = (short)13820;
short var_16 = (short)27038;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1677143687912303088ULL;
unsigned char var_22 = (unsigned char)180;
long long int var_23 = 6523271040977029544LL;
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
