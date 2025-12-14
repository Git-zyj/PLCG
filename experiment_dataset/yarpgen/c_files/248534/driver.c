#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3468909143254923839LL;
unsigned short var_1 = (unsigned short)53472;
int var_2 = 1710420783;
unsigned long long int var_7 = 3266459685564220981ULL;
signed char var_8 = (signed char)-126;
long long int var_9 = 8870619540086313631LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 4369982498945860712LL;
signed char var_13 = (signed char)-76;
void init() {
}

void checksum() {
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
