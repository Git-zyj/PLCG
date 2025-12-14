#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 97406782918372401LL;
long long int var_1 = 5046740561743455551LL;
short var_2 = (short)-5734;
short var_5 = (short)22969;
unsigned int var_9 = 766206418U;
int var_11 = 2103352579;
signed char var_13 = (signed char)-117;
int zero = 0;
unsigned short var_18 = (unsigned short)31686;
unsigned int var_19 = 4278697480U;
int var_20 = 729470100;
long long int var_21 = -2159514179055807147LL;
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
