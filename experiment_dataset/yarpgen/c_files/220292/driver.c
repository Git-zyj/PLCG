#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16452421354547912255ULL;
unsigned char var_10 = (unsigned char)113;
unsigned long long int var_11 = 15849172129511662185ULL;
unsigned short var_14 = (unsigned short)13628;
int zero = 0;
unsigned int var_16 = 3477612245U;
unsigned long long int var_17 = 14617893161203096707ULL;
unsigned long long int var_18 = 4656709460627901692ULL;
unsigned int var_19 = 3801035207U;
unsigned long long int var_20 = 17793545567242073426ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
