#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4749369491993381622LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-112;
unsigned short var_9 = (unsigned short)16151;
signed char var_12 = (signed char)-46;
int var_15 = -1782986416;
int zero = 0;
unsigned long long int var_16 = 5847424139215907498ULL;
unsigned long long int var_17 = 1702408756914853391ULL;
signed char var_18 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
