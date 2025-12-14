#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6632199130662252987LL;
long long int var_6 = 518764033773897117LL;
signed char var_7 = (signed char)93;
int var_8 = 994994872;
long long int var_9 = -7032866235486771785LL;
unsigned int var_11 = 279074908U;
long long int var_13 = 8033358726374680174LL;
int zero = 0;
signed char var_15 = (signed char)-30;
int var_16 = -1752466367;
long long int var_17 = 2470920007345479159LL;
long long int var_18 = 2224938314579560453LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
