/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233450
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((arr_1 [i_0] [i_0]) + (arr_3 [i_0]))) : (min((-8111740529060514191LL), (((/* implicit */long long int) var_8))))));
        arr_4 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)28281)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) var_15)) ? (arr_3 [i_0]) : (-8111740529060514191LL)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                {
                    var_17 = ((((arr_9 [i_2 - 4] [i_3] [i_3 - 1]) + (9223372036854775807LL))) << (((((arr_9 [i_2 - 1] [i_2] [i_3 - 1]) + (3838547452497877307LL))) - (9LL))));
                    arr_11 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) var_11);
    }
    for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
    {
        var_19 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4 + 1]))));
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_14 [i_4 + 1])), (max((arr_12 [i_4]), (((/* implicit */unsigned short) ((signed char) var_10)))))));
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6810)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned short)37254)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (~(-7866784639726252045LL)))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_4 - 2])), (var_3))))))));
    }
    var_21 = ((/* implicit */signed char) max((min((((/* implicit */short) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned char)92))))), (var_9))), (((/* implicit */short) var_14))));
}
