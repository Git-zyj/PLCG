#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 2974058464724224930LL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 462540130U;
signed char var_13 = (signed char)-95;
long long int var_15 = 3378035579460351438LL;
unsigned short var_18 = (unsigned short)49375;
int zero = 0;
long long int var_19 = -6283906797441439971LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1481986243U;
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
