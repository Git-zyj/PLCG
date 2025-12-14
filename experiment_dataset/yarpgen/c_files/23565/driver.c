#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1068718580U;
unsigned long long int var_3 = 1959502195641258696ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 5575087029227039649LL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2773860269U;
unsigned long long int var_10 = 15884321324344798054ULL;
long long int var_12 = 6172891664390638698LL;
signed char var_13 = (signed char)95;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 15295711978924945715ULL;
unsigned long long int var_17 = 1305058263405201305ULL;
short var_18 = (short)-2607;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
