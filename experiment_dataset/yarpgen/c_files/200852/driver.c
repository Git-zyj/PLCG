#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 938413034852283262LL;
int var_6 = -203183181;
long long int var_9 = 1142442074032465920LL;
long long int var_10 = 5827494365716470426LL;
long long int var_11 = -4071927808365107798LL;
signed char var_16 = (signed char)98;
long long int var_17 = -8186480325474404388LL;
int zero = 0;
unsigned long long int var_20 = 4731093994075286865ULL;
unsigned int var_21 = 807432419U;
long long int var_22 = 3278153952229666298LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
