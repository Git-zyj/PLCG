#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -433947840;
long long int var_10 = -6083082892698212701LL;
unsigned long long int var_11 = 17611361806823704692ULL;
long long int var_12 = -8261300952357749987LL;
int zero = 0;
long long int var_14 = 8479968614269925628LL;
signed char var_15 = (signed char)-71;
void init() {
}

void checksum() {
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
