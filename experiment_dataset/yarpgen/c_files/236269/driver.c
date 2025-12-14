#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5182922325331455194ULL;
signed char var_6 = (signed char)74;
unsigned long long int var_8 = 14298673291055266911ULL;
unsigned long long int var_9 = 17652591838124885658ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 1892427490692773598ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
