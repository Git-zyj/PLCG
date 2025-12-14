#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6088995774675107329ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_12 = 1287131051383347863ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 635281219U;
int zero = 0;
unsigned long long int var_18 = 16663859292442579385ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 14025928197632531492ULL;
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
