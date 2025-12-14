/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209661
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(0ULL))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((((/* implicit */_Bool) 1611142619U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))) : (var_5)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8275)))))) : ((~(9814889420804150456ULL)))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_21 = ((/* implicit */unsigned char) (signed char)7);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) -644241488))));
    }
    for (short i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        var_23 -= ((/* implicit */_Bool) arr_12 [i_4] [i_4]);
        arr_14 [i_4] [i_4] = ((/* implicit */short) var_12);
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) arr_15 [22U]);
        var_25 = var_10;
        var_26 = arr_15 [i_5];
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 4294967295U))));
}
