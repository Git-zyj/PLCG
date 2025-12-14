#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5914952080711388673LL;
int var_6 = -1369218460;
unsigned short var_7 = (unsigned short)3305;
unsigned long long int var_9 = 3996640708413782375ULL;
int zero = 0;
int var_12 = 574854715;
unsigned long long int var_13 = 7065692697819809811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
