#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10387954001738800458ULL;
long long int var_4 = -4341114644994392680LL;
unsigned long long int var_6 = 6031006206329359796ULL;
unsigned long long int var_11 = 14567496266022888651ULL;
unsigned char var_13 = (unsigned char)56;
long long int var_16 = 3189228203148877639LL;
long long int var_17 = 6075343548926362652LL;
int zero = 0;
long long int var_18 = -3983417888331297097LL;
unsigned char var_19 = (unsigned char)254;
unsigned char var_20 = (unsigned char)163;
unsigned long long int var_21 = 14585508377552847366ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
