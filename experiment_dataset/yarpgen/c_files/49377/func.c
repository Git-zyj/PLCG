/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49377
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37604))) | (-622191628912933520LL)));
                arr_5 [i_0] = ((/* implicit */signed char) max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) var_1))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [7ULL] = ((/* implicit */signed char) -1272643287);
                            arr_13 [i_0] [(unsigned char)6] [i_0] [i_3] [i_2] [i_1] = ((/* implicit */signed char) -622191628912933523LL);
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_13)))) ? ((~(arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                                arr_17 [i_1 + 2] [i_1] [i_0] [i_3] = arr_10 [i_4] [i_0] [i_0] [i_0];
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((((unsigned long long int) var_2)) & (((/* implicit */unsigned long long int) arr_0 [i_4] [i_0])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [2ULL] [i_0] [i_4])) ? (min((622191628912933520LL), (((/* implicit */long long int) 0U)))) : (min((((/* implicit */long long int) var_13)), (var_8)))))));
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) 4261412864U)) ? (-622191628912933520LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                            {
                                arr_22 [(short)0] [i_0] [7] [(short)0] [i_5] = ((/* implicit */unsigned short) var_0);
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_2] [i_2] [i_5]), (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_9 [i_0] [i_1 + 1] [i_3] [i_5]) | (16907510082756333001ULL))) : (arr_9 [i_5] [i_3] [i_1 - 1] [i_0])));
                            }
                        }
                    } 
                } 
                arr_23 [i_0] [6LL] [i_1 + 2] = ((/* implicit */int) ((((((/* implicit */_Bool) -622191628912933520LL)) ? (((/* implicit */long long int) arr_1 [i_0])) : (-4753743864868630875LL))) ^ (((/* implicit */long long int) ((arr_1 [i_0]) ^ (arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (int i_7 = 4; i_7 < 22; i_7 += 1) 
        {
            {
                arr_29 [i_6] = ((/* implicit */long long int) arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                arr_30 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-622191628912933520LL)))) ? (var_14) : (((/* implicit */unsigned long long int) var_13))));
                arr_31 [i_6] = ((/* implicit */unsigned long long int) arr_28 [i_6] [i_6] [i_6]);
            }
        } 
    } 
}
