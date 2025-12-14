#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6102889706549127147LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 5561817935994661401ULL;
short var_8 = (short)-20076;
unsigned short var_9 = (unsigned short)19361;
int zero = 0;
unsigned short var_10 = (unsigned short)56532;
unsigned char var_11 = (unsigned char)127;
unsigned short var_12 = (unsigned short)3437;
short var_13 = (short)14936;
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
