#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
unsigned short var_2 = (unsigned short)37567;
unsigned char var_3 = (unsigned char)53;
int var_4 = 1245528839;
signed char var_5 = (signed char)95;
signed char var_8 = (signed char)58;
unsigned int var_9 = 1779492981U;
long long int var_10 = -3683304245715773737LL;
signed char var_11 = (signed char)11;
int var_12 = 430568112;
int var_16 = -1191237879;
long long int var_18 = -5742001590298803135LL;
int zero = 0;
int var_19 = -66424399;
long long int var_20 = 3711313944161524689LL;
long long int var_21 = 400311740851626291LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
