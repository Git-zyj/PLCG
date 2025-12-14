/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241599
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
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) (short)4673))) ? (((/* implicit */unsigned int) ((var_15) ^ (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (var_16) : (var_2))))), (((/* implicit */unsigned int) (unsigned char)151))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */int) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(short)16] [i_1] [i_3] [18U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_1 + 1] [i_3]))))), (arr_8 [(unsigned char)0] [i_1] [18LL] [i_1] [i_4] [i_4])));
                                arr_14 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) 296819825)) ? (((/* implicit */int) (unsigned char)151)) : (-1))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                                arr_15 [i_0] [i_1] [i_2 + 1] = min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0 - 1]));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_17)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_1] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_2 - 2] [i_5])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_5]))) : (var_9)));
                        arr_20 [i_0] [i_1] [i_5] [i_5] [i_5] &= ((/* implicit */short) var_8);
                    }
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]);
        arr_22 [i_0] = max((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) : (arr_4 [i_0 - 1] [i_0] [i_0]))), (max((arr_4 [i_0 - 1] [i_0] [i_0]), (arr_4 [i_0 - 1] [i_0] [(unsigned short)2]))));
    }
}
