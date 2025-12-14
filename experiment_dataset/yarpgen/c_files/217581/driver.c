#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2924758582U;
signed char var_4 = (signed char)82;
signed char var_7 = (signed char)-103;
unsigned short var_9 = (unsigned short)44205;
int zero = 0;
short var_12 = (short)27110;
unsigned long long int var_13 = 10131924153789821764ULL;
signed char var_14 = (signed char)-37;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
