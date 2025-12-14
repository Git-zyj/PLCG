#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2414834267785561465LL;
unsigned char var_1 = (unsigned char)242;
long long int var_2 = -4653755769120900343LL;
unsigned char var_3 = (unsigned char)107;
unsigned long long int var_5 = 4943578607643020173ULL;
unsigned long long int var_8 = 11813589760777385546ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -891787636;
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
