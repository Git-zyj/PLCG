#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3255592391393613330ULL;
long long int var_7 = 6578923765132503894LL;
unsigned short var_11 = (unsigned short)53331;
int zero = 0;
long long int var_18 = 7829505831596835253LL;
unsigned long long int var_19 = 11499695808135973841ULL;
signed char var_20 = (signed char)-3;
unsigned short var_21 = (unsigned short)56450;
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
