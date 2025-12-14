#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17505;
unsigned long long int var_2 = 4825981766249250296ULL;
unsigned long long int var_12 = 4827097575286719180ULL;
unsigned long long int var_14 = 10466647324146930458ULL;
unsigned long long int var_15 = 10457783667156921705ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)81;
unsigned short var_19 = (unsigned short)4664;
signed char var_20 = (signed char)106;
unsigned char var_21 = (unsigned char)27;
unsigned long long int var_22 = 13348310096845747990ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
