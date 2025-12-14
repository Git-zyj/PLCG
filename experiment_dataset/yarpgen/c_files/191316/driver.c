#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3669000227U;
unsigned int var_2 = 4065919232U;
signed char var_3 = (signed char)106;
unsigned char var_5 = (unsigned char)9;
int var_9 = 1084217637;
int zero = 0;
signed char var_11 = (signed char)-69;
long long int var_12 = -1863887841774696365LL;
unsigned long long int var_13 = 4430974092722629326ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
