#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16337;
long long int var_2 = -8688697661793835975LL;
short var_4 = (short)29896;
unsigned int var_5 = 3257519029U;
unsigned char var_6 = (unsigned char)210;
unsigned char var_7 = (unsigned char)100;
unsigned int var_8 = 1070869591U;
unsigned long long int var_9 = 12982697167623763297ULL;
int zero = 0;
short var_10 = (short)8803;
short var_11 = (short)-13037;
unsigned int var_12 = 4034280988U;
unsigned int var_13 = 4022579196U;
signed char var_14 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
