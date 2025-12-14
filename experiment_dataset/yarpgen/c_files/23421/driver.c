#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9920095988476427786ULL;
unsigned char var_1 = (unsigned char)177;
int var_4 = -2007119862;
int var_6 = 415977869;
unsigned char var_7 = (unsigned char)157;
long long int var_11 = 7179141930732840476LL;
int var_13 = -1218396720;
unsigned int var_14 = 657035079U;
unsigned int var_16 = 3197093477U;
int zero = 0;
int var_19 = 1181582321;
int var_20 = -983042248;
unsigned long long int var_21 = 10004731833745076739ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
