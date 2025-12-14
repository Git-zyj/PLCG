#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -612342453;
long long int var_5 = -2687083372414720760LL;
signed char var_6 = (signed char)-94;
unsigned char var_9 = (unsigned char)152;
int zero = 0;
long long int var_10 = 7653932632722153946LL;
unsigned short var_11 = (unsigned short)49420;
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
