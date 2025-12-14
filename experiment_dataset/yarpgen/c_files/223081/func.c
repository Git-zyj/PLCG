/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223081
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [14])) ? (((((/* implicit */_Bool) 8191)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned short)908))));
        var_19 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((((/* implicit */int) arr_2 [i_0] [i_0])) - (62045)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((((((((/* implicit */int) arr_2 [i_0] [i_0])) - (62045))) + (17780))) - (25))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) % ((~(-871469678)))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_4), (((unsigned char) var_3))))) < (min((((((/* implicit */int) var_5)) >> (((var_11) - (1121454222U))))), (((/* implicit */int) var_6))))));
}
