/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218633
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) (~(arr_1 [i_0])));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_3] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2952))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_3 - 1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) var_3);
                                arr_18 [i_1] [i_4 + 1] = min((arr_16 [i_3 - 1]), (min((var_1), (((/* implicit */long long int) var_8)))));
                                arr_19 [i_5] [i_5 - 2] [i_1] [i_5 + 2] [i_5] = ((/* implicit */long long int) (unsigned short)0);
                                arr_20 [i_1] [i_1] [i_3 - 1] [i_4 + 1] [i_2] = min((max((arr_5 [i_1]), (((long long int) var_5)))), (min((var_14), (((/* implicit */long long int) ((unsigned short) -4412021800440047185LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((_Bool)1))))));
                                arr_29 [i_1] [i_2] [i_3 - 1] [i_1] [i_1] = min((1979088835), (((/* implicit */int) (_Bool)1)));
                                arr_30 [i_1] [i_6] [i_3] [(unsigned short)10] [i_1] |= ((/* implicit */long long int) max((((var_5) && (((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 - 1])))), ((!(((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 21; i_8 += 2) 
        {
            for (int i_9 = 4; i_9 < 23; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_41 [i_11] [i_1] [i_1] [i_1] [i_8] [i_1] = max((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) var_4)) : (arr_16 [i_1]))) == (((((/* implicit */_Bool) var_2)) ? (3726050642345225924LL) : (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_9] [i_10] [i_1]))))))), (((((arr_38 [i_1] [i_8] [i_9 - 1] [i_8] [i_1]) + (2147483647))) << (((((arr_38 [i_1] [i_10] [i_9 - 1] [i_1] [i_1]) + (1095229168))) - (14))))));
                                arr_42 [i_1] [i_1] [(unsigned short)15] [i_9] [i_9] = ((/* implicit */int) var_0);
                            }
                        } 
                    } 
                    arr_43 [i_9] [i_9] = ((/* implicit */long long int) var_7);
                    arr_44 [i_9] [i_8 + 1] [i_9] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) (~(arr_35 [i_1])))) + (max((((/* implicit */long long int) var_7)), (2823373489476012902LL)))))));
                }
            } 
        } 
    }
}
