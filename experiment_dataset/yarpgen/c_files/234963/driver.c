#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)1;
long long int var_3 = -6155425603863884537LL;
unsigned int var_4 = 323498833U;
int var_6 = 1432359827;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = -2020458030;
long long int var_15 = -1081029616344407662LL;
int zero = 0;
int var_19 = -1606908256;
unsigned int var_20 = 3359705108U;
unsigned long long int var_21 = 17923988000600137975ULL;
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
