#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 3884291197142818841ULL;
unsigned char var_2 = (unsigned char)169;
unsigned short var_3 = (unsigned short)28004;
unsigned long long int var_4 = 6809473121713424113ULL;
unsigned long long int var_5 = 5057168639555748653ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)2381;
unsigned int var_9 = 299311070U;
unsigned long long int var_10 = 14057693131319660409ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)2033;
unsigned short var_12 = (unsigned short)34639;
unsigned long long int var_13 = 15344547455235049478ULL;
long long int var_14 = -1022722857903580700LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
