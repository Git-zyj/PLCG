#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned int var_2 = 3054680477U;
short var_8 = (short)7572;
long long int var_11 = -5162691442313912281LL;
int zero = 0;
unsigned int var_18 = 3558008989U;
unsigned long long int var_19 = 2879538479068159613ULL;
void init() {
}

void checksum() {
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
