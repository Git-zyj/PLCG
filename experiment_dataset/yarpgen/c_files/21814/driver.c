#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6189218076891840408LL;
long long int var_5 = 2386041849217093327LL;
unsigned long long int var_6 = 8488649467552925103ULL;
unsigned short var_7 = (unsigned short)21776;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3659413572U;
unsigned char var_11 = (unsigned char)231;
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
