#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5087405183865514313ULL;
unsigned char var_7 = (unsigned char)193;
unsigned int var_17 = 3498015474U;
unsigned short var_18 = (unsigned short)51737;
int zero = 0;
int var_19 = 1411334419;
long long int var_20 = -3829863474548983305LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
