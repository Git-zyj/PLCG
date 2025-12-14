#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7782916999410831371LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_5 = 1263046702;
int var_6 = 1815887680;
int var_7 = -2120435083;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 873315768899208492LL;
unsigned long long int var_13 = 15533533024532060410ULL;
int var_14 = 1885909285;
unsigned long long int var_15 = 8138437675020095772ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
