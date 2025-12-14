#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
long long int var_2 = -2570748495892422374LL;
unsigned short var_4 = (unsigned short)57498;
_Bool var_5 = (_Bool)1;
int var_7 = 1414661272;
unsigned short var_9 = (unsigned short)36457;
unsigned char var_10 = (unsigned char)135;
int var_14 = 387491056;
int zero = 0;
unsigned long long int var_15 = 8350348046399189403ULL;
signed char var_16 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
