/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27757
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
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (+(arr_4 [i_0]))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                arr_15 [5U] [i_2] [i_0] = ((/* implicit */signed char) arr_1 [i_0 + 1] [i_0 + 1]);
                                arr_16 [i_3] [(unsigned short)0] [(short)9] [i_4] [(unsigned short)7] [i_0] [i_0] = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_17 [i_0] [i_0] [3] [i_3] [7LL] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0] [i_2 - 1]))));
                        arr_20 [i_0] [i_1] [i_0] [i_0] [i_5] = arr_12 [(signed char)1] [i_1] [i_1] [i_1] [i_1] [i_1];
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) -3626152767815417880LL)))))));
                        var_14 = ((/* implicit */short) 4294967295U);
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) (unsigned short)6);
                        arr_26 [i_0] [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)97)) ? (91448343U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50151))))))) ? (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) arr_1 [i_2] [i_7])))) : (((((/* implicit */_Bool) -972339196937733550LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_2 + 2] [i_1] [i_2]))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_0] [i_2] [1LL] [i_1] = arr_5 [i_0 + 1] [i_0];
                        arr_32 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((unsigned int) -5961114175817788679LL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_16 = ((/* implicit */unsigned char) arr_4 [i_2]);
                        var_17 = ((/* implicit */unsigned int) (signed char)-5);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */signed char) arr_34 [i_9]);
        arr_36 [i_9] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */long long int) var_1)) : (var_0)))) ? (arr_34 [i_9]) : (((((/* implicit */_Bool) 11126940766017701530ULL)) ? (((/* implicit */long long int) 3600417U)) : (arr_34 [11]))))));
    }
    var_18 = ((/* implicit */short) var_0);
    var_19 = ((/* implicit */unsigned int) var_8);
}
