#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6137581733362202172LL;
long long int var_3 = 34633491060645532LL;
long long int var_6 = 6142081150056899872LL;
long long int var_7 = 4453442109599702330LL;
long long int var_8 = -8837261285348691687LL;
long long int var_10 = -9190564789431553576LL;
long long int var_11 = -5192708925733685030LL;
long long int var_13 = -684192382188971999LL;
long long int var_14 = -2835043158281421729LL;
long long int var_16 = 176402552730603125LL;
int zero = 0;
long long int var_19 = -2524292006820167454LL;
long long int var_20 = 6122261682564474476LL;
long long int var_21 = -7223701336792604045LL;
long long int var_22 = 8123829104559144127LL;
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
