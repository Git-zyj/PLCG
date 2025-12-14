#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12059900174160565911ULL;
unsigned long long int var_6 = 13169036596317773118ULL;
unsigned short var_9 = (unsigned short)32850;
signed char var_11 = (signed char)27;
int var_13 = 735847681;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8402332566073979577LL;
long long int var_16 = 2393559246007077800LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
