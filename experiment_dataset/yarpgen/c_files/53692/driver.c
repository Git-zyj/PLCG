#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1000614297122002917LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = -2500376786901362238LL;
int zero = 0;
unsigned char var_12 = (unsigned char)93;
signed char var_13 = (signed char)-14;
long long int var_14 = 2939642226160467670LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
