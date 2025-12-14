#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 463882255461937329LL;
long long int var_6 = 3382751566930465019LL;
long long int var_7 = 8703288374149626838LL;
int var_13 = -1885317084;
int zero = 0;
unsigned short var_17 = (unsigned short)54699;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
