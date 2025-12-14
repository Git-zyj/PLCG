#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8165038732526932366LL;
unsigned long long int var_8 = 4183684888230894575ULL;
unsigned long long int var_14 = 9418069482246100276ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5835698064101892419LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
