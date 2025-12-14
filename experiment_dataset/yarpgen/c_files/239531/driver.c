#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3881574485482175155ULL;
unsigned char var_6 = (unsigned char)115;
unsigned long long int var_10 = 10420385781574663432ULL;
unsigned int var_12 = 2102047997U;
unsigned int var_13 = 3245548394U;
unsigned int var_14 = 2683359827U;
int zero = 0;
long long int var_17 = 1695171414619179713LL;
unsigned long long int var_18 = 16163642312269327742ULL;
long long int var_19 = 4510118032505337840LL;
long long int var_20 = 7451107620635305999LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
