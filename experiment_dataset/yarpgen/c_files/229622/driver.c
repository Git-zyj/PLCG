#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61662;
unsigned long long int var_4 = 13665516131250869248ULL;
int var_11 = 1483435836;
int var_18 = 250492104;
int zero = 0;
unsigned long long int var_19 = 16189977381843110418ULL;
unsigned short var_20 = (unsigned short)42701;
unsigned short var_21 = (unsigned short)5130;
unsigned long long int var_22 = 12921689679268861502ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
