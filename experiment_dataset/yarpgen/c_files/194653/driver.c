#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4965735425478317661LL;
long long int var_2 = -5312125554596361516LL;
_Bool var_3 = (_Bool)0;
int var_4 = 862134332;
unsigned long long int var_5 = 5713308630384908830ULL;
unsigned short var_9 = (unsigned short)17732;
int var_10 = -1446127893;
int var_11 = 1228853894;
int zero = 0;
long long int var_13 = -6007746584522948521LL;
unsigned char var_14 = (unsigned char)177;
long long int var_15 = 358660011514394375LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
