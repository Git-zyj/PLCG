#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
long long int var_3 = 3634465484553087874LL;
signed char var_4 = (signed char)-118;
unsigned short var_5 = (unsigned short)59177;
short var_7 = (short)-5108;
long long int var_9 = -5382493343016122283LL;
int zero = 0;
long long int var_10 = 8862720680403964975LL;
unsigned long long int var_11 = 11352270443052634726ULL;
unsigned long long int var_12 = 11793021647689432610ULL;
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
