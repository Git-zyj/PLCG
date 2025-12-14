#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44208;
long long int var_1 = 5300915312924569754LL;
unsigned long long int var_2 = 7012932330609446134ULL;
short var_3 = (short)-16927;
unsigned int var_4 = 4203656068U;
unsigned long long int var_5 = 7670719929954335822ULL;
int var_6 = 1674409543;
short var_7 = (short)31992;
long long int var_8 = -5802181465409805807LL;
int var_9 = 1793624842;
signed char var_10 = (signed char)-89;
int zero = 0;
signed char var_11 = (signed char)-102;
unsigned long long int var_12 = 15714669176146470471ULL;
long long int var_13 = -1218734613222417052LL;
unsigned short var_14 = (unsigned short)43150;
unsigned short var_15 = (unsigned short)26453;
unsigned int var_16 = 3357977934U;
signed char var_17 = (signed char)39;
signed char var_18 = (signed char)41;
long long int var_19 = 2664315431148014961LL;
signed char var_20 = (signed char)82;
unsigned int var_21 = 2953725224U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 10617176648286802112ULL;
long long int var_24 = -6043454068586937393LL;
unsigned int var_25 = 1675502273U;
signed char var_26 = (signed char)-38;
signed char var_27 = (signed char)69;
int var_28 = 1041475660;
long long int var_29 = 3164846509175515912LL;
signed char var_30 = (signed char)17;
int var_31 = -711917195;
_Bool var_32 = (_Bool)1;
long long int var_33 = -8528752331668956417LL;
int var_34 = -80884622;
unsigned long long int var_35 = 17483175016289359321ULL;
unsigned short var_36 = (unsigned short)42268;
long long int var_37 = -1369346568342011145LL;
unsigned long long int var_38 = 13790329912151198614ULL;
unsigned short var_39 = (unsigned short)10561;
int var_40 = 1599909003;
signed char var_41 = (signed char)76;
short var_42 = (short)19588;
unsigned short var_43 = (unsigned short)5410;
_Bool var_44 = (_Bool)1;
short var_45 = (short)13244;
unsigned long long int var_46 = 3147267202668879394ULL;
short var_47 = (short)-14623;
_Bool var_48 = (_Bool)1;
unsigned short var_49 = (unsigned short)23416;
_Bool var_50 = (_Bool)0;
int var_51 = 40566567;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_50);
    hash(&seed, var_51);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
