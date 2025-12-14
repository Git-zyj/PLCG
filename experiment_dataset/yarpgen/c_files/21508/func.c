/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21508
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
    var_15 = ((/* implicit */unsigned char) var_6);
    var_16 -= ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)218))));
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((unsigned char) (unsigned char)0))) : (((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-478))))));
            var_20 *= ((unsigned char) arr_0 [i_0] [i_1]);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_2))));
                var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_1]))));
            }
            var_23 = arr_6 [i_1] [i_0];
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_24 = ((/* implicit */short) ((unsigned char) arr_8 [(unsigned char)12]));
            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)244))));
        }
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((short)(-32767 - 1)), (arr_12 [i_4] [i_4])))) ? (((/* implicit */int) min(((unsigned char)247), (var_3)))) : ((~(((/* implicit */int) arr_11 [i_4])))))), (((/* implicit */int) var_12)))))));
        arr_13 [(unsigned char)8] = ((/* implicit */short) (+(((/* implicit */int) max((arr_11 [i_4]), (arr_3 [i_4] [i_4]))))));
    }
}
