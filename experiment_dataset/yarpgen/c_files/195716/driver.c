#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7209;
unsigned short var_1 = (unsigned short)20043;
unsigned short var_2 = (unsigned short)64358;
unsigned short var_3 = (unsigned short)60208;
long long int var_4 = 218829577631783789LL;
unsigned short var_5 = (unsigned short)17474;
unsigned short var_6 = (unsigned short)52894;
unsigned short var_7 = (unsigned short)4671;
unsigned short var_8 = (unsigned short)59527;
unsigned short var_9 = (unsigned short)19343;
unsigned short var_10 = (unsigned short)5952;
long long int var_11 = 2289093024776600683LL;
unsigned short var_12 = (unsigned short)46910;
unsigned short var_13 = (unsigned short)59199;
long long int var_14 = 8969217725245734367LL;
long long int var_15 = 2622319875492732335LL;
unsigned short var_16 = (unsigned short)7069;
unsigned short var_17 = (unsigned short)45766;
long long int var_18 = -382671845982313401LL;
int zero = 0;
long long int var_19 = 1871644133475297951LL;
long long int var_20 = -9105757436996199536LL;
long long int var_21 = -469057409543385292LL;
long long int var_22 = -6566855259011372362LL;
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
