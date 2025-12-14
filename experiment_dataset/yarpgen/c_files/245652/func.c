/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245652
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44487)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)53)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42322)) ? (var_2) : (((/* implicit */unsigned long long int) 426585115U))))))))) : (4611685880988434432LL)));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
        var_22 = ((/* implicit */unsigned char) min((511LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 19ULL))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)246), ((unsigned char)12))))))))));
    }
    for (unsigned char i_1 = 4; i_1 < 12; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12121950949465683726ULL)) ? (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [(unsigned short)10] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_5 [i_1 - 3])) : (2430291566U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) + (((((/* implicit */unsigned long long int) -1822146964)) + (18446744073709551571ULL)))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 262143U)) % (6324793124243867889ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31))))) : (((/* implicit */int) (unsigned short)2048))));
        var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max(((short)12488), (((/* implicit */short) (unsigned char)242))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1] [i_1]))))) : (((((/* implicit */_Bool) (unsigned short)27777)) ? (268435455U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31971))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 0ULL))) ? (((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned char)43)))) : (min((arr_5 [i_1 - 3]), (((/* implicit */int) (unsigned short)15360)))))))));
    }
}
