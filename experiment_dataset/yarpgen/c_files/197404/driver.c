#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4422951914375322345ULL;
unsigned long long int var_1 = 4058872278296017854ULL;
short var_2 = (short)13213;
unsigned short var_4 = (unsigned short)7470;
unsigned long long int var_5 = 8061272587638693786ULL;
int var_8 = 1326815972;
signed char var_11 = (signed char)-43;
long long int var_18 = 275469793925030440LL;
int zero = 0;
unsigned int var_19 = 3715586867U;
short var_20 = (short)13403;
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
