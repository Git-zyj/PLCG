#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11637;
signed char var_1 = (signed char)25;
int var_3 = 1099236245;
unsigned char var_6 = (unsigned char)60;
unsigned char var_7 = (unsigned char)57;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-109;
unsigned char var_11 = (unsigned char)38;
short var_12 = (short)26705;
int zero = 0;
unsigned char var_14 = (unsigned char)27;
long long int var_15 = 8413910985864553725LL;
unsigned int var_16 = 3453067554U;
unsigned int var_17 = 407965593U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
