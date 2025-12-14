#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5517042745279708135ULL;
short var_4 = (short)-4554;
signed char var_5 = (signed char)73;
unsigned short var_6 = (unsigned short)60055;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 7890076626844179069ULL;
unsigned char var_11 = (unsigned char)70;
short var_12 = (short)15649;
int var_13 = 986771908;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
