#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5622931978961581279LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)29858;
unsigned short var_6 = (unsigned short)14403;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)42684;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 473972418436623301ULL;
unsigned long long int var_17 = 17731797838004648750ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 18029280685913484614ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
