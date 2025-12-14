#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -309532646575134061LL;
long long int var_2 = -2641251360050713198LL;
long long int var_3 = -6462863503240821821LL;
unsigned int var_4 = 578679766U;
int var_6 = -370137050;
signed char var_7 = (signed char)-111;
unsigned long long int var_9 = 18414280402367665126ULL;
int zero = 0;
unsigned int var_11 = 1103650882U;
unsigned long long int var_12 = 6658893167282316522ULL;
unsigned int var_13 = 3937361731U;
signed char var_14 = (signed char)17;
long long int var_15 = 8843533622491560968LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
