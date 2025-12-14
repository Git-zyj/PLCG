#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64770;
unsigned short var_1 = (unsigned short)27704;
unsigned short var_3 = (unsigned short)9961;
unsigned short var_8 = (unsigned short)7162;
unsigned long long int var_9 = 6103968815992015061ULL;
unsigned long long int var_12 = 12425708094265335267ULL;
unsigned short var_14 = (unsigned short)13378;
unsigned long long int var_15 = 2677162446352506137ULL;
unsigned long long int var_18 = 10679087816199512515ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)22954;
unsigned long long int var_20 = 18289558211533464498ULL;
unsigned short var_21 = (unsigned short)52751;
unsigned short var_22 = (unsigned short)49001;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
