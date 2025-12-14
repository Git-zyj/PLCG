#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
unsigned char var_2 = (unsigned char)145;
long long int var_6 = 1177970556623010413LL;
int var_7 = -2093673878;
unsigned long long int var_8 = 16818474455115153158ULL;
int var_9 = -1611519222;
int zero = 0;
long long int var_10 = 863031872771399215LL;
signed char var_11 = (signed char)2;
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
