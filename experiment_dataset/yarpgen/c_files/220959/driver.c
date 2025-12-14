#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-10;
unsigned long long int var_13 = 4742378220432844271ULL;
unsigned long long int var_14 = 18319987514175863590ULL;
long long int var_17 = -8659861049437451487LL;
long long int var_19 = 5816558126694715800LL;
int zero = 0;
signed char var_20 = (signed char)-69;
unsigned short var_21 = (unsigned short)41739;
void init() {
}

void checksum() {
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
