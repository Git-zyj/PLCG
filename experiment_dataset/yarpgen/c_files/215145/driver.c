#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
int var_1 = 925763663;
unsigned char var_2 = (unsigned char)67;
long long int var_3 = -760913493891116314LL;
int var_4 = 1866679610;
unsigned char var_6 = (unsigned char)74;
unsigned short var_7 = (unsigned short)60513;
long long int var_8 = -5380568769205142590LL;
long long int var_9 = 5779693619481207289LL;
int zero = 0;
long long int var_10 = 7371077713212286117LL;
unsigned long long int var_11 = 15325520483200182200ULL;
signed char var_12 = (signed char)68;
long long int var_13 = 7712702661683857503LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
