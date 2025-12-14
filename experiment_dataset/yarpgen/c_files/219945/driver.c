#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1011814924;
short var_4 = (short)10820;
long long int var_6 = 4692424068223573862LL;
unsigned short var_10 = (unsigned short)19504;
int var_11 = -548263872;
int var_14 = -1331503385;
short var_16 = (short)-685;
int var_18 = 863259856;
int zero = 0;
unsigned int var_20 = 3175486893U;
unsigned int var_21 = 3248995641U;
short var_22 = (short)15211;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
