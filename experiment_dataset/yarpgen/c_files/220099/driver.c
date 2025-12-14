#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10260234945205758241ULL;
int var_4 = 803548158;
unsigned long long int var_5 = 6814395762589766075ULL;
int var_7 = -113801641;
unsigned long long int var_9 = 9492440779685516973ULL;
unsigned long long int var_10 = 232523429560840102ULL;
unsigned long long int var_12 = 16011289807249724041ULL;
unsigned long long int var_13 = 16547994685208839442ULL;
int var_14 = 411331897;
unsigned long long int var_15 = 1389522512047700399ULL;
int var_17 = 1309464681;
int var_18 = -1688610662;
int zero = 0;
unsigned long long int var_19 = 5293276592596554ULL;
long long int var_20 = 3942527476797026853LL;
int var_21 = 112796106;
unsigned long long int var_22 = 7843806411878629118ULL;
unsigned long long int var_23 = 9382206815716374746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
