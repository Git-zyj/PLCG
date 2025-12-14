#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
long long int var_1 = -2646214707022575720LL;
unsigned long long int var_11 = 13195345795164436869ULL;
long long int var_12 = 3679959739954529575LL;
long long int var_14 = 3291757380222610709LL;
int zero = 0;
long long int var_16 = 4831244757422754173LL;
signed char var_17 = (signed char)-104;
long long int var_18 = 7097509338592537731LL;
long long int var_19 = 8422874875411407287LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
