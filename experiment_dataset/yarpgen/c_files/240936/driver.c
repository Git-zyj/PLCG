#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6400500357977120382LL;
unsigned long long int var_1 = 959440705131950460ULL;
unsigned short var_4 = (unsigned short)64647;
long long int var_5 = 9133964295892083848LL;
int var_6 = 401361079;
int var_7 = 222358412;
unsigned long long int var_8 = 15889370588610417529ULL;
unsigned long long int var_9 = 8577835111681462267ULL;
int zero = 0;
unsigned long long int var_10 = 4759779808134773792ULL;
signed char var_11 = (signed char)-112;
unsigned int var_12 = 297304612U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
