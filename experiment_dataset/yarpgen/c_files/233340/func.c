/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233340
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_1 - 1] [i_1 + 1])) ? (237676393) : ((-(841022054))))), (((/* implicit */int) arr_7 [(unsigned short)1] [(unsigned char)8] [i_0]))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 3; i_4 < 21; i_4 += 2) /* same iter space */
        {
            arr_15 [i_3] [(_Bool)1] [i_3] = ((/* implicit */signed char) var_5);
            var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3])) > (((/* implicit */int) var_3))));
        }
        for (int i_5 = 3; i_5 < 21; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) 
            {
                for (long long int i_7 = 2; i_7 < 20; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) (unsigned short)0);
                            arr_25 [i_3] [i_5] [i_5] [(short)16] [i_5] [i_8] = (~(arr_23 [i_3] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_8] [i_8]));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7 + 2])) && (((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [(short)21]))));
                            arr_26 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_23 [2U] [i_8] [i_5] [i_3 + 1] [i_5] [i_3 + 1]) : (((/* implicit */int) arr_12 [i_3]))))));
                        }
                        arr_27 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 1139724514U)) ? (((((/* implicit */_Bool) arr_23 [i_3] [i_5] [9] [i_6] [i_7] [i_7 + 1])) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)18)))) : (((/* implicit */int) arr_11 [i_3]))));
                        var_18 += ((/* implicit */unsigned short) ((((arr_23 [i_3] [i_7] [i_3] [i_3] [i_3] [i_3]) > (((/* implicit */int) arr_18 [6U] [i_5] [i_5])))) ? (((var_6) ? (((/* implicit */int) arr_14 [i_3] [i_7])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_11 [i_7]))));
                        arr_28 [i_7] &= ((/* implicit */long long int) arr_19 [i_3 - 1] [i_6 + 1] [i_7 - 2]);
                    }
                } 
            } 
            arr_29 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)30564))));
        }
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_3 - 1] [i_3] [(signed char)16]))));
    }
}
