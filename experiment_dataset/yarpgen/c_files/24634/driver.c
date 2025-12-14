#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54138;
signed char var_2 = (signed char)-37;
int var_3 = -1585814184;
unsigned long long int var_4 = 16666522053955967148ULL;
unsigned long long int var_5 = 10159437843990990352ULL;
unsigned short var_6 = (unsigned short)32437;
unsigned short var_7 = (unsigned short)7031;
int zero = 0;
unsigned long long int var_10 = 12994169855864790669ULL;
unsigned int var_11 = 787602407U;
long long int var_12 = -76649055044132990LL;
unsigned int var_13 = 3293867146U;
unsigned int var_14 = 235717069U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
