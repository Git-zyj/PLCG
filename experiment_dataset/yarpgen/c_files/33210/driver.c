#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17760;
long long int var_5 = 4677372785907392181LL;
long long int var_8 = 3301173215398284987LL;
unsigned long long int var_12 = 1735534702009125506ULL;
int var_13 = -1017991704;
unsigned long long int var_15 = 11388647615090607251ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)206;
signed char var_20 = (signed char)-39;
int var_21 = -607283176;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
