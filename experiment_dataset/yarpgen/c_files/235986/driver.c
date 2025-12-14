#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-46;
unsigned long long int var_3 = 187545083580720199ULL;
unsigned int var_5 = 2145841688U;
unsigned long long int var_6 = 17412731218382802719ULL;
unsigned long long int var_7 = 16433407892087977567ULL;
signed char var_9 = (signed char)-62;
int zero = 0;
unsigned char var_10 = (unsigned char)125;
unsigned long long int var_11 = 11861954357563438468ULL;
int var_12 = 1019316663;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
