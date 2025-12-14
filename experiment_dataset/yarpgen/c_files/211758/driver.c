#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16688254184969887254ULL;
unsigned char var_2 = (unsigned char)98;
unsigned int var_3 = 2153663011U;
long long int var_4 = 5626752514440876345LL;
int var_5 = -1723080907;
unsigned int var_6 = 3581082092U;
unsigned int var_9 = 3416129504U;
unsigned long long int var_10 = 11986842059815131468ULL;
unsigned long long int var_11 = 13954156738759546412ULL;
unsigned char var_12 = (unsigned char)59;
unsigned char var_14 = (unsigned char)242;
int zero = 0;
unsigned long long int var_16 = 11677139369250707502ULL;
int var_17 = 982451777;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
