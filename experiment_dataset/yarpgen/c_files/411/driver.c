#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 7043119U;
unsigned short var_8 = (unsigned short)6888;
int var_9 = -1613135810;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1757697618U;
unsigned long long int var_21 = 2607130314134864478ULL;
unsigned int var_22 = 657244029U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
