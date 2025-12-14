#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10404663190377005378ULL;
unsigned long long int var_2 = 15165267636894666062ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)42387;
int zero = 0;
unsigned long long int var_18 = 9878069060853023836ULL;
unsigned int var_19 = 2125537011U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
