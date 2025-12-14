#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3589367705U;
short var_2 = (short)-2208;
long long int var_11 = -1163505204473677776LL;
long long int var_14 = 5655793561770397978LL;
int zero = 0;
long long int var_17 = 1817398438492319969LL;
unsigned long long int var_18 = 1378515204644484139ULL;
unsigned char var_19 = (unsigned char)21;
long long int var_20 = 6735329908238688123LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
