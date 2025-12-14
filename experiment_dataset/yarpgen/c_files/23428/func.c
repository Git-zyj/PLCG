/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23428
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
    var_17 = ((/* implicit */int) ((signed char) max((((((/* implicit */_Bool) (unsigned short)20543)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10289))) : (3834908356U))), (((/* implicit */unsigned int) max((35723850), (-1474353908)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3834908356U)))) : (((arr_2 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))))))))));
            var_20 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_21 ^= ((/* implicit */unsigned char) var_0);
                arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]))))) + ((~(((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))));
            }
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                arr_12 [i_1] [i_1] [i_3] = ((/* implicit */signed char) 3834908374U);
                arr_13 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
            }
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_4])) : ((~(((/* implicit */int) arr_14 [i_4] [i_1] [i_0] [i_0]))))));
                var_23 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_3 [i_4]))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) (unsigned short)44992);
                            var_25 = ((/* implicit */unsigned int) arr_14 [i_0] [i_4] [i_5] [i_6 - 1]);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_6] [i_6 + 1] [i_6 - 1])) ? (arr_0 [i_6 - 1] [i_1]) : (arr_0 [i_6 - 1] [i_1])));
                        }
                    } 
                } 
            }
            arr_23 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) || (((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_0] [i_1]))));
        }
    }
    var_27 = ((/* implicit */short) var_16);
}
