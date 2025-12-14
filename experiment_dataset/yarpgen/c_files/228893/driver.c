#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8944483091047098173LL;
unsigned char var_3 = (unsigned char)41;
int zero = 0;
unsigned long long int var_19 = 5459233107973869849ULL;
unsigned long long int var_20 = 9004932087841286607ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14039274287791324836ULL;
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
