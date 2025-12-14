#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8879413218823380329ULL;
signed char var_3 = (signed char)82;
unsigned int var_5 = 1363607544U;
unsigned long long int var_6 = 9224242805900091347ULL;
unsigned int var_9 = 1997694586U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)37;
int var_12 = -1549110791;
int var_19 = 1348435208;
int zero = 0;
unsigned char var_20 = (unsigned char)180;
unsigned int var_21 = 497636228U;
unsigned int var_22 = 1555034618U;
unsigned char var_23 = (unsigned char)249;
unsigned long long int var_24 = 2942585696232210184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
