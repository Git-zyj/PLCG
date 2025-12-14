#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -230578248171032516LL;
int var_7 = -1408963250;
_Bool var_8 = (_Bool)0;
int var_9 = 223729841;
int var_16 = 28789651;
unsigned char var_18 = (unsigned char)161;
int zero = 0;
short var_19 = (short)-19434;
short var_20 = (short)-1356;
unsigned char var_21 = (unsigned char)48;
void init() {
}

void checksum() {
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
