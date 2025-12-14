/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48924
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0 + 1]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */int) ((arr_4 [i_0 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-29832)))))) / (((/* implicit */int) var_4)));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) || (((/* implicit */_Bool) ((short) arr_3 [i_0] [i_0] [i_3]))))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) ((max((arr_4 [i_2]), (((/* implicit */unsigned int) var_19)))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [i_0] [i_2] [i_3]), (var_0))))))))));
                }
                for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (268435455U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_3 [i_0] [i_2 - 4] [i_4])) : (((((/* implicit */int) (unsigned short)7642)) - (var_17))))))))));
                    arr_14 [i_4] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_4])) + ((+(((/* implicit */int) arr_11 [i_0] [i_4] [i_2 + 1] [i_4]))))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0]))))), (((int) var_5)))) : (((/* implicit */int) max((arr_5 [i_0 + 1] [i_0] [i_2 - 1]), (((/* implicit */short) var_11))))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_5 = 4; i_5 < 17; i_5 += 3) 
                {
                    var_24 = var_9;
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_1])) >> (((((((((/* implicit */int) var_4)) + (2147483647))) >> ((((-(((/* implicit */int) arr_1 [i_5])))) + (5740))))) - (1013))))))));
                }
                for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_20 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min(((+(4026531841U))), (((/* implicit */unsigned int) var_15))));
                    var_26 = ((((/* implicit */int) arr_19 [i_0])) - (((/* implicit */int) var_5)));
                }
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    arr_23 [i_0 - 1] [i_1] [i_2] [i_7] = var_6;
                    var_27 = arr_16 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_7];
                }
            }
        }
    }
    var_28 *= ((/* implicit */short) var_10);
}
