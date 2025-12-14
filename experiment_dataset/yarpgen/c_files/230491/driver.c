#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13039;
short var_2 = (short)12581;
unsigned short var_4 = (unsigned short)41623;
long long int var_7 = 1244293071700166603LL;
long long int var_8 = -6073674103870963351LL;
long long int var_10 = 8502887161288096001LL;
unsigned short var_11 = (unsigned short)3185;
long long int var_12 = -8306016680567732872LL;
short var_13 = (short)7584;
long long int var_14 = 407776767187147109LL;
long long int var_15 = -1589536132259547120LL;
int zero = 0;
unsigned short var_16 = (unsigned short)57297;
short var_17 = (short)-3964;
long long int var_18 = -8876782514508372719LL;
long long int var_19 = -6281889244030734056LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
