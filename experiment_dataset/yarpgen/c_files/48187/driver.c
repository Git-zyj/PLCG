#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1283737895;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-4285;
_Bool var_6 = (_Bool)0;
long long int var_8 = -7376570155753183880LL;
unsigned short var_9 = (unsigned short)41288;
int zero = 0;
unsigned short var_17 = (unsigned short)1608;
int var_18 = 261272595;
unsigned short var_19 = (unsigned short)33091;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
