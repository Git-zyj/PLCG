#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 167011322;
short var_2 = (short)-14554;
unsigned long long int var_4 = 1393538738856261835ULL;
short var_6 = (short)11527;
unsigned char var_7 = (unsigned char)234;
unsigned int var_8 = 40620561U;
short var_11 = (short)-10208;
unsigned short var_12 = (unsigned short)10132;
unsigned long long int var_13 = 2830071758913296967ULL;
int zero = 0;
long long int var_16 = -8772143806652409837LL;
unsigned short var_17 = (unsigned short)27041;
unsigned int var_18 = 2126119792U;
unsigned long long int var_19 = 13261964260864974918ULL;
long long int var_20 = 5740764599341828009LL;
unsigned int var_21 = 3413740904U;
signed char var_22 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
