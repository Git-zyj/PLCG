/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53202
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((678335592) + (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_2 - 2] [i_1] [i_3] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_1] [i_1] [i_0]))) : (arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] [i_4]))) : (((((/* implicit */_Bool) var_12)) ? (4614310215886879326LL) : (((/* implicit */long long int) arr_5 [i_0] [i_1] [(signed char)2] [i_3])))))) > (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_3 - 2] [i_2 - 2])), (arr_13 [i_4] [i_4] [i_4] [i_1] [i_4]))))));
                                arr_16 [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)-5435)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_23 [i_6 - 2] [i_1] [i_2 + 1] [i_1] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (short)3072)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((((/* implicit */int) var_1)) % (((/* implicit */int) var_6)))))), (arr_22 [i_6 + 1] [i_2 + 1] [i_1 + 3]));
                                arr_24 [i_5] [i_5] [i_1] = ((/* implicit */short) var_5);
                                arr_25 [i_6] [i_1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >= (((int) 140737219919872LL))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_9 [i_2] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [(signed char)7] [i_0] [i_1] [i_1] [i_2] [i_2] [i_1]))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_20 [i_1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 1] [i_1])), (max((((/* implicit */unsigned int) arr_20 [i_0] [i_2] [i_2] [i_0] [i_2 - 1] [i_2] [i_1])), (arr_5 [i_0] [i_1] [i_2] [i_1])))))) ? ((-(((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2 - 2] [i_0])))) : (((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [16] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_3)))) ^ (((/* implicit */int) arr_21 [(short)8] [i_1] [i_2 - 1] [i_1 + 2] [i_1] [i_1] [i_1]))))));
                    var_14 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 23; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                arr_32 [i_7] [i_8] = ((/* implicit */long long int) var_1);
                var_15 = ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
}
