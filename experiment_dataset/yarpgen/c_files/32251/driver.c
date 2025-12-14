#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25786;
long long int var_2 = -2128778866571754155LL;
long long int var_4 = 210034039839972603LL;
long long int var_7 = 4844969490938648175LL;
unsigned short var_8 = (unsigned short)39403;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 15272500857265482658ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
