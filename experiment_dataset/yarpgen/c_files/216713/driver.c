#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)31332;
unsigned long long int var_7 = 6100514117315858177ULL;
int var_8 = -406744722;
long long int var_9 = 510750646572510940LL;
unsigned char var_10 = (unsigned char)36;
short var_13 = (short)10285;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1299543694;
unsigned int var_16 = 3881267550U;
int var_17 = -1864181822;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
