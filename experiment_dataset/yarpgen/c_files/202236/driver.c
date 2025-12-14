#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28625;
int var_5 = -361106407;
_Bool var_9 = (_Bool)1;
unsigned char var_16 = (unsigned char)144;
unsigned long long int var_18 = 17208905082336555260ULL;
int zero = 0;
int var_19 = 810431981;
unsigned long long int var_20 = 8922640133663712227ULL;
unsigned int var_21 = 2633335843U;
void init() {
}

void checksum() {
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
