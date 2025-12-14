#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 4492541384671595484ULL;
long long int var_4 = -7601167925304821032LL;
int var_5 = -160344294;
unsigned long long int var_9 = 7868998498530716273ULL;
int zero = 0;
unsigned long long int var_19 = 5252113948923661593ULL;
long long int var_20 = 1783031587282096235LL;
void init() {
}

void checksum() {
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
