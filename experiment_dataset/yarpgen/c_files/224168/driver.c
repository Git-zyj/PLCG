#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -396651031774024623LL;
long long int var_1 = -3722085111454527286LL;
long long int var_2 = -6562919464410743645LL;
long long int var_4 = -572994941680823436LL;
long long int var_5 = 2861751203155903026LL;
long long int var_7 = -1837953186556828902LL;
long long int var_11 = -7113637289347418086LL;
long long int var_13 = -8483018656632310822LL;
long long int var_14 = -5618465517879823982LL;
int zero = 0;
long long int var_15 = 3678763589241008615LL;
long long int var_16 = 1644506247705389583LL;
long long int var_17 = 3882323597226732321LL;
long long int var_18 = -1430190731905107677LL;
long long int var_19 = -2684406955687259481LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
