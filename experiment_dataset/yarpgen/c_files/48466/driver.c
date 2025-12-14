#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1830255672;
unsigned short var_1 = (unsigned short)46878;
long long int var_2 = 2900490219325496319LL;
int var_3 = 1117314173;
long long int var_4 = -7350171988508374960LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 15540209268864655954ULL;
unsigned long long int var_8 = 4634364625781003907ULL;
unsigned short var_9 = (unsigned short)57538;
unsigned long long int var_10 = 16387379409880441211ULL;
int zero = 0;
long long int var_12 = 5916068644565177182LL;
short var_13 = (short)20884;
int var_14 = 1958115725;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
