#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2647999447171841886LL;
unsigned int var_2 = 1330945211U;
unsigned long long int var_4 = 8243777958133091935ULL;
unsigned long long int var_6 = 12550035399744739728ULL;
int var_7 = 604705509;
int zero = 0;
unsigned long long int var_13 = 4832357481709834471ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
