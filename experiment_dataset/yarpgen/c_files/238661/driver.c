#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9080569212067930602LL;
long long int var_1 = 6055230473740985971LL;
signed char var_3 = (signed char)20;
int var_6 = 155963937;
unsigned char var_12 = (unsigned char)23;
int zero = 0;
signed char var_13 = (signed char)98;
int var_14 = -1777069010;
unsigned long long int var_15 = 11351097532628276799ULL;
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
