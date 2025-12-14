#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -739645018;
unsigned short var_2 = (unsigned short)44193;
signed char var_5 = (signed char)-56;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)50832;
signed char var_8 = (signed char)10;
unsigned long long int var_9 = 1859367510479954603ULL;
signed char var_11 = (signed char)-29;
unsigned long long int var_12 = 5425980763296716094ULL;
int zero = 0;
unsigned long long int var_13 = 1647285891463762054ULL;
signed char var_14 = (signed char)99;
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
