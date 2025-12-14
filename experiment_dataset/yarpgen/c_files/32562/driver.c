#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2841192280U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 9746087337028931578ULL;
unsigned long long int var_5 = 17466575293217561760ULL;
long long int var_9 = 2485978409771264034LL;
unsigned int var_11 = 3708573673U;
signed char var_14 = (signed char)55;
int zero = 0;
int var_16 = -869178104;
unsigned int var_17 = 952258518U;
unsigned char var_18 = (unsigned char)1;
unsigned long long int var_19 = 15610359039177847284ULL;
unsigned int var_20 = 2970712011U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
