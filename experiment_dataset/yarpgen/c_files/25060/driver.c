#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9887;
int var_1 = -756780742;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_9 = -1006495591;
unsigned char var_11 = (unsigned char)57;
unsigned char var_12 = (unsigned char)149;
unsigned long long int var_13 = 12875816766021886680ULL;
int zero = 0;
int var_14 = 1615477517;
short var_15 = (short)31621;
short var_16 = (short)27279;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
