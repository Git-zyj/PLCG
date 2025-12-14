#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11545492335617105887ULL;
unsigned long long int var_3 = 10997225113652258298ULL;
unsigned long long int var_4 = 12402630096452331206ULL;
unsigned long long int var_7 = 14900246954497108767ULL;
unsigned long long int var_8 = 2042464990192927036ULL;
int zero = 0;
unsigned long long int var_10 = 3837060448182016055ULL;
unsigned long long int var_11 = 4557201695249992868ULL;
unsigned long long int var_12 = 13718851410928251787ULL;
unsigned long long int var_13 = 2438982733740128521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
