#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -154165913;
int var_2 = -1471427638;
long long int var_3 = 1303753152406427486LL;
long long int var_4 = -8871103934947049018LL;
short var_5 = (short)-6738;
unsigned long long int var_6 = 9312782592848545279ULL;
short var_7 = (short)15606;
unsigned long long int var_8 = 17779696325293913853ULL;
unsigned char var_10 = (unsigned char)29;
unsigned char var_12 = (unsigned char)45;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
