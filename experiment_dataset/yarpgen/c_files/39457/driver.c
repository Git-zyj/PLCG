#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
long long int var_3 = 1492162941671518628LL;
long long int var_4 = -6020853319971627082LL;
unsigned char var_5 = (unsigned char)15;
unsigned char var_6 = (unsigned char)253;
signed char var_7 = (signed char)-101;
unsigned long long int var_9 = 10524661697477928793ULL;
unsigned long long int var_13 = 10604433308599926484ULL;
int zero = 0;
short var_18 = (short)-28922;
_Bool var_19 = (_Bool)1;
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
