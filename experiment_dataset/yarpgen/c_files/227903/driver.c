#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
int var_10 = 902868933;
int var_11 = 720365474;
int var_19 = -1422502376;
int zero = 0;
unsigned short var_20 = (unsigned short)4610;
_Bool var_21 = (_Bool)1;
long long int var_22 = -547826490987637286LL;
long long int var_23 = 7825006062468508803LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
