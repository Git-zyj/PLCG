#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 934930250421967521LL;
signed char var_4 = (signed char)-105;
signed char var_6 = (signed char)0;
long long int var_7 = -7788236275678461777LL;
signed char var_9 = (signed char)21;
int zero = 0;
long long int var_12 = -1460461062852457005LL;
long long int var_13 = -42430943072111817LL;
void init() {
}

void checksum() {
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
