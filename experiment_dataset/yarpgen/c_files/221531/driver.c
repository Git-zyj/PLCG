#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7349378761723370559ULL;
signed char var_4 = (signed char)103;
int var_8 = -1394269304;
_Bool var_9 = (_Bool)1;
int var_10 = 2112602310;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 7487765709865002276LL;
unsigned short var_13 = (unsigned short)11197;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
