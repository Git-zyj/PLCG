#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)64;
unsigned long long int var_3 = 3434748999528891447ULL;
unsigned long long int var_4 = 13139509982534604383ULL;
unsigned long long int var_5 = 12144472499900657473ULL;
unsigned short var_9 = (unsigned short)40116;
int var_11 = -1042732757;
int zero = 0;
signed char var_13 = (signed char)50;
unsigned long long int var_14 = 16927639528939529413ULL;
_Bool var_15 = (_Bool)1;
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
