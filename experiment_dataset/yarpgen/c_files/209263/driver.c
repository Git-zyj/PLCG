#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4275750169179658766LL;
long long int var_8 = 8306248774187068752LL;
unsigned int var_9 = 2442016857U;
long long int var_10 = -6192538256273937986LL;
int zero = 0;
long long int var_11 = 3535221204041266717LL;
unsigned short var_12 = (unsigned short)29368;
long long int var_13 = 4214514053525531114LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
