/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190614
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                var_12 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (short)-6821))) == (max((var_0), (var_3)))))));
                var_13 = ((/* implicit */short) ((signed char) ((unsigned int) arr_2 [i_0] [i_0] [i_1])));
                var_14 ^= ((/* implicit */unsigned int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) (short)129)))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_15 = var_2;
                    var_16 = ((/* implicit */unsigned int) max((var_16), (var_3)));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        arr_10 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) arr_3 [(short)14] [i_2 - 1] [i_3]));
                        var_17 = var_7;
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [(short)10] = ((/* implicit */short) (~(((unsigned int) 1259664080U))));
                            arr_15 [i_2] [(signed char)9] [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) > (((/* implicit */int) ((short) arr_6 [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(3556804244U)))))))));
                        }
                    }
                    var_18 = ((/* implicit */short) var_2);
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_5])) ? ((~(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0] [i_1] [i_5]) == (var_9)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_1] [i_0] [i_6] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_6 + 1] [i_5] [i_6] [i_7 - 1]))));
                            arr_26 [i_7] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */short) (~(var_9)));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7011)) ? (var_3) : (var_8)));
                            arr_27 [i_7 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((4294443008U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31)))));
                        }
                        for (short i_8 = 4; i_8 < 12; i_8 += 3) 
                        {
                            var_20 = (+((~(min((((/* implicit */unsigned int) (signed char)-84)), (738163082U))))));
                            arr_31 [i_0] [i_5] [i_8] = ((short) var_3);
                        }
                        arr_32 [(short)3] [0U] [(short)3] [(short)3] = ((/* implicit */short) (-(((/* implicit */int) (short)(-32767 - 1)))));
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_2), (var_2)));
}
