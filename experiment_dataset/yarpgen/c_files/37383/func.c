/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37383
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((min((arr_2 [i_0]), (arr_2 [i_0]))) <= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_2 [i_0])))));
        var_20 = ((/* implicit */unsigned int) min(((~(arr_2 [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63276)) || (((4294967292U) < (19U))))))) | (max((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) var_0)), (1U)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        for (short i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) max(((~(679012520U))), (((/* implicit */unsigned int) min((((unsigned char) var_0)), (((/* implicit */unsigned char) ((_Bool) arr_2 [i_2 - 1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_22 = ((/* implicit */short) (!(arr_9 [i_1] [(unsigned char)11] [i_3])));
                    var_23 = arr_5 [i_1] [i_2] [i_2];
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((long long int) (-2147483647 - 1))) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_16 [i_5] [i_5] [i_5] [i_5] [i_1] [i_5] [i_5] = ((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 - 2] [i_1])) ? (arr_8 [i_2 - 1] [i_2 - 1] [i_1]) : (arr_8 [i_2 - 1] [i_3] [i_1]));
                                arr_17 [14] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_5]) : (19U))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
