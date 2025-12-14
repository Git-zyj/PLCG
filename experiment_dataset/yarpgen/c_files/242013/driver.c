#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)28;
int var_8 = -1845567713;
long long int var_10 = -7499044587468412947LL;
signed char var_11 = (signed char)-1;
int zero = 0;
unsigned char var_13 = (unsigned char)106;
signed char var_14 = (signed char)-14;
signed char var_15 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
