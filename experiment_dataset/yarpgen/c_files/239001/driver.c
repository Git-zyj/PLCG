#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11868776837370102918ULL;
signed char var_2 = (signed char)-90;
signed char var_9 = (signed char)126;
signed char var_11 = (signed char)-97;
unsigned long long int var_14 = 14373702593127655116ULL;
unsigned long long int var_17 = 1549590929446185447ULL;
int zero = 0;
unsigned long long int var_18 = 7405235944189182107ULL;
signed char var_19 = (signed char)106;
unsigned long long int var_20 = 6386529837293611104ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
