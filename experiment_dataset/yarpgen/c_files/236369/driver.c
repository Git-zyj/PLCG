#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10378408966006137202ULL;
short var_1 = (short)15915;
unsigned long long int var_6 = 17438140774571739041ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_13 = 6037539139117381696LL;
int zero = 0;
short var_18 = (short)-9637;
long long int var_19 = 3658912826549473335LL;
short var_20 = (short)12903;
unsigned short var_21 = (unsigned short)2924;
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
