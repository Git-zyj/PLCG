#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
long long int var_1 = 759013882400557665LL;
int var_2 = -501890826;
unsigned char var_3 = (unsigned char)203;
unsigned char var_4 = (unsigned char)119;
unsigned short var_5 = (unsigned short)35008;
unsigned char var_6 = (unsigned char)10;
short var_7 = (short)12141;
long long int var_8 = 5861849588851443608LL;
long long int var_9 = -1390726866805793362LL;
int var_10 = 1088612577;
unsigned long long int var_11 = 2574671745199945138ULL;
unsigned short var_12 = (unsigned short)51254;
short var_13 = (short)-19176;
int zero = 0;
long long int var_14 = -8040424753189272317LL;
short var_15 = (short)-19863;
short var_16 = (short)-27212;
unsigned long long int var_17 = 12090479392245531746ULL;
long long int var_18 = -5927350742188030229LL;
unsigned short var_19 = (unsigned short)32801;
unsigned short var_20 = (unsigned short)64967;
unsigned char var_21 = (unsigned char)52;
unsigned int var_22 = 1369621228U;
unsigned short var_23 = (unsigned short)15474;
short var_24 = (short)22066;
long long int var_25 = -4819823464823342399LL;
long long int var_26 = 5303849363009789322LL;
signed char var_27 = (signed char)-56;
short var_28 = (short)-1542;
unsigned long long int var_29 = 13512685183936418597ULL;
unsigned short var_30 = (unsigned short)20619;
unsigned long long int var_31 = 28271019631865358ULL;
long long int var_32 = -6780801840204640374LL;
unsigned long long int var_33 = 1059038247302856436ULL;
long long int var_34 = 345743256005892757LL;
unsigned char var_35 = (unsigned char)34;
signed char var_36 = (signed char)51;
signed char var_37 = (signed char)-35;
long long int var_38 = -4910575263638095390LL;
short var_39 = (short)-6320;
unsigned char var_40 = (unsigned char)234;
signed char var_41 = (signed char)-57;
unsigned int var_42 = 3436123078U;
unsigned char var_43 = (unsigned char)121;
unsigned long long int var_44 = 5056974803762254007ULL;
unsigned long long int var_45 = 11648863432182858810ULL;
unsigned long long int var_46 = 12598114742780422264ULL;
unsigned long long int var_47 = 16950183265593915743ULL;
unsigned long long int var_48 = 16769930587887437557ULL;
unsigned short var_49 = (unsigned short)34070;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
