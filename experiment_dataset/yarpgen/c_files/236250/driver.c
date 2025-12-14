#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3387903651833672224ULL;
unsigned short var_2 = (unsigned short)43253;
int var_4 = 1035936571;
int zero = 0;
signed char var_14 = (signed char)-31;
unsigned char var_15 = (unsigned char)254;
long long int var_16 = -2663946587180748924LL;
long long int var_17 = 6094127089326184040LL;
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
