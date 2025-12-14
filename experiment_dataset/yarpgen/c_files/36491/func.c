/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36491
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
    var_15 = ((_Bool) ((int) (unsigned short)2));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (3430772990422622881ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-34))))) : (((((((/* implicit */int) var_13)) < (-383282213))) ? (var_0) : (var_1)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (+(((arr_2 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((arr_3 [i_1] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1])))))))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+(383282199))) : (((/* implicit */int) ((_Bool) (short)224)))))) ? ((~(((((/* implicit */_Bool) (short)32759)) ? (arr_3 [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2 + 1])))))) : (((((/* implicit */_Bool) (short)12656)) ? (((((/* implicit */_Bool) -383282209)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            var_22 = ((/* implicit */unsigned int) ((signed char) 18446744073709551615ULL));
            var_23 = ((/* implicit */long long int) (signed char)-7);
            var_24 = ((/* implicit */int) ((_Bool) min((arr_1 [i_2 + 1] [i_2 + 1]), (arr_1 [i_2 + 1] [i_2 + 1]))));
        }
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)6495)) ? (((/* implicit */int) min(((short)-18289), (((/* implicit */short) var_9))))) : (var_7))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10897))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14))))))))))));
    }
    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_5 [2LL]))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3317718894315192224LL)) ? (min((((/* implicit */unsigned long long int) arr_7 [i_3])), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65517)) / (((/* implicit */int) (short)32759)))))))) ? (((/* implicit */unsigned long long int) arr_8 [i_3 - 1])) : (min((max((arr_6 [i_3] [i_3 - 1] [20ULL]), (((/* implicit */unsigned long long int) 4294967295LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_8 [i_3 + 1])))))))));
    }
}
