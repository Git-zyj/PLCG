/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239372
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) + (4294967295U)));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max(((~(2587260996U))), (min((2186725910U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65513)))))))));
        var_16 = ((/* implicit */long long int) (~(((unsigned int) max(((unsigned short)47387), (((/* implicit */unsigned short) (short)-13384)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_1)) ? (2587260996U) : (arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) (signed char)1))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    var_17 -= ((/* implicit */long long int) arr_7 [3U] [3U]);
                    var_18 = var_5;
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1] [i_1])) * (((/* implicit */int) ((arr_6 [i_1]) > (var_6))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (long long int i_6 = 3; i_6 < 14; i_6 += 2) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_19 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1]);
                        var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_19 [i_1] [i_4] [i_5] [i_6])))) | (((/* implicit */int) (unsigned short)65530))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 4601789533034491989LL))) ? (((unsigned int) arr_2 [i_1] [i_6])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) arr_10 [i_5])))))))))));
                        arr_21 [i_1] [i_1] [(signed char)0] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_19 [i_5] [i_6 + 1] [i_5] [i_6 - 1]));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -6768775236433210977LL))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))) : ((~(arr_6 [i_5])))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13384))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) & (arr_6 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18840)))));
    }
    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                {
                    arr_31 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))))), (((/* implicit */unsigned int) arr_22 [i_7 - 1]))))) ? (((/* implicit */int) arr_25 [i_7 - 1] [i_7] [7LL])) : (((((/* implicit */_Bool) arr_1 [i_7 - 1] [i_7 - 1])) ? ((~(((/* implicit */int) arr_30 [i_7 - 1] [i_7] [3U])))) : (((int) arr_2 [i_8] [i_8]))))));
                    arr_32 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */int) min(((~(-6237315387024095801LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */_Bool) arr_28 [i_7] [i_8] [i_8] [i_9])) ? (((/* implicit */int) arr_30 [i_7] [i_8] [i_9])) : (((/* implicit */int) arr_26 [i_7])))) : (((((/* implicit */_Bool) -1954027795)) ? (((/* implicit */int) arr_29 [i_7] [i_7] [i_7] [i_7])) : (1341649682))))))));
                    var_24 = (~(((((/* implicit */_Bool) arr_25 [i_7] [i_7 - 1] [i_7])) ? (((/* implicit */int) (unsigned short)25983)) : (((/* implicit */int) (unsigned short)1610)))));
                }
            } 
        } 
        var_25 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_29 [i_7 + 1] [(unsigned short)5] [i_7] [i_7 - 1])), (2108241385U)));
    }
    var_26 = var_3;
    var_27 = ((/* implicit */unsigned short) var_6);
}
