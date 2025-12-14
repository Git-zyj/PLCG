#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1398853786;
int var_2 = -533531896;
int var_8 = 2129261172;
unsigned long long int var_9 = 16433514341862709675ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)58338;
int var_14 = 953528101;
long long int var_15 = -3821415219199011619LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
