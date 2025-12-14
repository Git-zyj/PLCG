/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240253
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]);
                    arr_8 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2] [i_1]))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]);
        arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_4 [i_0 + 4] [i_0 + 4] [i_0]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 5990726081425743850LL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1])))))))), (arr_11 [(_Bool)1]))))));
        var_19 = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_3] [i_3])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_10 [i_3]))))))), (arr_11 [i_3])));
        var_20 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4 + 2] [i_6])) - (((/* implicit */int) arr_12 [i_4 + 1] [i_6])))))))));
                    arr_19 [i_4 + 2] [i_4] [i_4] = ((/* implicit */unsigned short) ((max((arr_14 [i_4 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6] [i_6]))))))) & (((/* implicit */unsigned int) arr_15 [i_4] [i_4 + 2]))));
                    arr_20 [10U] [10U] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9771)))) ? ((~(arr_14 [(_Bool)1]))) : (arr_14 [i_4 - 1])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_14 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_5] [i_6] [i_6])))))), (var_10)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (short i_8 = 4; i_8 < 8; i_8 += 1) 
                        {
                            {
                                var_22 |= ((((/* implicit */int) var_15)) & (((/* implicit */int) max((arr_12 [i_6] [i_5]), (arr_12 [i_4 + 2] [i_5])))));
                                var_23 += ((/* implicit */unsigned int) max((((/* implicit */int) min(((unsigned short)55768), (((/* implicit */unsigned short) arr_23 [(short)3] [1] [i_7] [i_7]))))), (arr_15 [i_7] [i_7])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) arr_22 [(unsigned short)4] [i_5] [i_5] [i_5]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_10), (var_10))), (((/* implicit */unsigned long long int) var_13))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
}
