/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195501
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
    var_11 = ((/* implicit */long long int) ((var_10) == (max((((/* implicit */unsigned int) var_1)), (((unsigned int) var_7))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (-(((arr_2 [i_0] [i_1 - 4]) << (((arr_4 [i_1 - 4]) - (405158803U)))))));
            arr_6 [i_0] = ((/* implicit */unsigned short) var_2);
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
            var_13 &= (~(max((arr_8 [i_0] [i_0] [i_2]), (arr_2 [i_0] [i_2]))));
        }
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((unsigned long long int) arr_2 [i_0] [i_0])) * (((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])))))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    arr_15 [i_3] = ((/* implicit */long long int) arr_2 [i_3] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 19; i_7 += 3) 
                        {
                            {
                                arr_22 [16LL] [i_4] [i_5 + 2] [i_3] [i_7] = min((((((/* implicit */_Bool) max((arr_2 [i_3] [(unsigned short)5]), (((/* implicit */unsigned int) -268435456))))) ? (var_4) : (((/* implicit */unsigned int) 268435455)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435445)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32751))) : (16380U)))) ? (((/* implicit */int) ((short) var_5))) : ((~(-268435463)))))));
                                var_15 = ((/* implicit */short) ((((arr_9 [i_3]) >> (((((/* implicit */int) arr_11 [i_3] [i_3] [i_7 + 1])) + (15827))))) + (((/* implicit */unsigned int) 633710754))));
                                var_16 ^= ((((/* implicit */_Bool) max((min((arr_20 [8U] [8] [i_6 - 2]), (arr_18 [0U]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 16383U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ? (((/* implicit */unsigned long long int) -1078063044953274729LL)) : (var_8));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_10 [i_3] [i_3]), (268435430)))) ? (((/* implicit */unsigned int) (+(arr_10 [i_3] [i_3])))) : (((((/* implicit */unsigned int) arr_10 [i_3] [i_3])) % (8355840U)))));
                }
                arr_23 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_3]))))) != (var_0)));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    for (short i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        {
                            arr_28 [i_3] [i_4] [i_4] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_3] [i_3 - 1]))) - ((~(268435454)))));
                            var_18 = ((/* implicit */unsigned int) arr_12 [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
}
