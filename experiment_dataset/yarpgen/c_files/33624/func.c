/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33624
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) & (182426852U)));
                        var_18 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        var_19 = ((var_13) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned short)10]))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_18 [i_5] = ((unsigned int) ((((/* implicit */_Bool) arr_17 [i_4] [i_5])) ? (4023906062U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_0] [i_4] [(unsigned short)10])))));
                    arr_19 [i_0] [i_0] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [0U] [i_4] [i_4] [(unsigned short)3]))) & (19U)));
                    var_20 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))));
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned short)8] [(unsigned short)1] [i_5])) ? ((+(8388607U))) : (arr_2 [i_0] [i_4] [i_5])));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (var_13)))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
        arr_21 [i_0] = ((((/* implicit */_Bool) (unsigned short)589)) ? (arr_2 [i_0] [(unsigned short)7] [i_0]) : (var_7));
    }
    var_22 = ((unsigned int) (+((+(((/* implicit */int) var_16))))));
}
