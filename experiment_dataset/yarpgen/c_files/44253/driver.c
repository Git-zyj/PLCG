#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-26;
_Bool var_8 = (_Bool)1;
long long int var_9 = 790622876579203637LL;
int zero = 0;
long long int var_19 = 6355758747045069372LL;
long long int var_20 = 5374620467253478602LL;
short var_21 = (short)7741;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
