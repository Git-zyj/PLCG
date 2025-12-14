#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1716328044022884841LL;
short var_5 = (short)12348;
unsigned long long int var_7 = 14163287431560143048ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)37973;
int var_19 = -833407741;
unsigned int var_20 = 851162393U;
signed char var_21 = (signed char)37;
long long int var_22 = 685100778337887782LL;
void init() {
}

void checksum() {
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
