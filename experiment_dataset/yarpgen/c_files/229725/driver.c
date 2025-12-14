#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1264240248;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)180;
int zero = 0;
long long int var_18 = -8911854105951006531LL;
int var_19 = 812336664;
void init() {
}

void checksum() {
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
