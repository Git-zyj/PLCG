#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12055014425874379978ULL;
unsigned int var_3 = 2760224347U;
unsigned int var_4 = 575477811U;
unsigned short var_5 = (unsigned short)27692;
unsigned long long int var_6 = 15969841478600331758ULL;
signed char var_7 = (signed char)23;
long long int var_8 = -5553739235326622177LL;
unsigned short var_9 = (unsigned short)25508;
int zero = 0;
unsigned short var_13 = (unsigned short)51828;
unsigned short var_14 = (unsigned short)29320;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
