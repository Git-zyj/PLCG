#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6131122701999026402LL;
long long int var_6 = -46041589385180148LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_18 = -2918098460169404468LL;
long long int var_19 = 3937730777719357338LL;
short var_20 = (short)9682;
unsigned long long int var_21 = 11442322297046020714ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
