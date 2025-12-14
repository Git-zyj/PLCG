#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_8 = (unsigned short)25431;
signed char var_10 = (signed char)-103;
int var_13 = -415214025;
int var_14 = 815696352;
unsigned int var_17 = 1492383555U;
int zero = 0;
int var_19 = 572070465;
unsigned short var_20 = (unsigned short)41443;
_Bool var_21 = (_Bool)1;
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
