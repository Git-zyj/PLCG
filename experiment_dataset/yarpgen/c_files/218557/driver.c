#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6599584881636515934LL;
unsigned char var_2 = (unsigned char)125;
signed char var_8 = (signed char)116;
unsigned int var_14 = 1294623271U;
int zero = 0;
long long int var_19 = 804241620524792729LL;
short var_20 = (short)17031;
long long int var_21 = -4861237030705312087LL;
long long int var_22 = -1482017809786186341LL;
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
