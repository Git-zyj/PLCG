#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-56;
signed char var_4 = (signed char)110;
long long int var_5 = -6399982837864543655LL;
long long int var_11 = 258688202746123162LL;
long long int var_12 = 6108483109689413595LL;
signed char var_15 = (signed char)-87;
long long int var_17 = 7247543685985084332LL;
long long int var_18 = 4674178292683250170LL;
int zero = 0;
long long int var_19 = -3492477025900791726LL;
long long int var_20 = 577186307127539700LL;
long long int var_21 = -5287075739324941821LL;
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
