#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-111;
short var_4 = (short)8594;
unsigned short var_13 = (unsigned short)49092;
long long int var_16 = -1275739259020369226LL;
int zero = 0;
unsigned int var_19 = 3844269107U;
signed char var_20 = (signed char)52;
long long int var_21 = -1537028429356403996LL;
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
