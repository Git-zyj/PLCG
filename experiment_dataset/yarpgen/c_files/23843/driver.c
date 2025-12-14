#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7160216162612021862LL;
signed char var_2 = (signed char)-118;
unsigned int var_3 = 4018077214U;
signed char var_4 = (signed char)32;
unsigned short var_10 = (unsigned short)60392;
int zero = 0;
long long int var_18 = 7208773684546957946LL;
long long int var_19 = 5114723647828602238LL;
unsigned int var_20 = 420837616U;
void init() {
}

void checksum() {
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
