/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37221
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
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((unsigned char) (!(((_Bool) arr_0 [i_0 - 1]))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)18120))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_16);
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max(((-(max((var_9), (((/* implicit */unsigned int) arr_5 [i_1])))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_16) && (var_16)))))))));
        var_21 = ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_0 [i_1 + 1])), ((-(((/* implicit */int) var_16)))))), (((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) arr_0 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_22 *= ((/* implicit */signed char) (+((~(((9223372036854775807LL) - (942833881497821722LL)))))));
        var_23 += ((/* implicit */signed char) arr_5 [i_2]);
    }
}
