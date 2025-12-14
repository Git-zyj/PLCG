#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63665;
unsigned short var_4 = (unsigned short)39169;
signed char var_5 = (signed char)40;
signed char var_9 = (signed char)-74;
int zero = 0;
unsigned short var_11 = (unsigned short)56406;
long long int var_12 = -6980259080356382585LL;
void init() {
}

void checksum() {
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
