#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2757064147U;
long long int var_3 = 7722201908064187986LL;
unsigned long long int var_7 = 6024681789004912839ULL;
int var_8 = -1295071184;
unsigned long long int var_12 = 8088438694139464858ULL;
unsigned int var_13 = 14834504U;
int zero = 0;
int var_18 = -435622546;
unsigned char var_19 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
