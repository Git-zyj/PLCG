#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5559709773122117230LL;
unsigned long long int var_4 = 11621393491796251905ULL;
unsigned long long int var_8 = 17165726159892480661ULL;
long long int var_9 = -2665561092811145553LL;
long long int var_13 = -1748185508797946679LL;
long long int var_15 = -7891267184460235457LL;
int zero = 0;
unsigned long long int var_16 = 5568026615827224448ULL;
long long int var_17 = -3407017831219576862LL;
long long int var_18 = 966340137895141910LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
