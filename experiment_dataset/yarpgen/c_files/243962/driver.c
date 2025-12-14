#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
int var_2 = 1222033936;
short var_3 = (short)28917;
signed char var_5 = (signed char)31;
int var_6 = 1359728721;
signed char var_11 = (signed char)127;
long long int var_14 = -1259962565957601822LL;
unsigned long long int var_15 = 3960959618814228612ULL;
int zero = 0;
short var_18 = (short)803;
int var_19 = 1826317634;
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
