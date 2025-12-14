#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3351460459827373741LL;
unsigned short var_2 = (unsigned short)40566;
signed char var_5 = (signed char)41;
signed char var_7 = (signed char)85;
unsigned int var_9 = 1274499144U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = -3621810851804747249LL;
unsigned long long int var_14 = 15096233910757338503ULL;
void init() {
}

void checksum() {
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
