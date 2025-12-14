#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 237115500403460821LL;
unsigned int var_3 = 370424927U;
int var_4 = -928384041;
unsigned long long int var_5 = 18054086697847809109ULL;
short var_6 = (short)-834;
unsigned char var_7 = (unsigned char)142;
long long int var_8 = 1604822547727862156LL;
int var_9 = -256030638;
int var_11 = 1977437341;
int var_12 = -1291112658;
int var_14 = 138877333;
long long int var_15 = -8995793694250367006LL;
int zero = 0;
unsigned char var_16 = (unsigned char)199;
signed char var_17 = (signed char)-36;
unsigned char var_18 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
