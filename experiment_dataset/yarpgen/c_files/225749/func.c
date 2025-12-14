/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225749
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned short) (short)32753)))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >= (((/* implicit */int) ((signed char) arr_7 [i_1] [i_0] [i_1] [i_0])))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1] |= ((/* implicit */int) var_10);
                            var_22 += ((/* implicit */short) (+(arr_11 [0] [i_1] [i_2] [i_3] [(unsigned short)1])));
                            arr_14 [i_4] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)63)) ? (-1419086141) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3766)))))));
                        }
                        arr_15 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [(signed char)4] [i_1] [i_2] [i_3]))));
                        arr_16 [(unsigned short)7] [(unsigned short)7] [i_2] [(signed char)17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_1))));
        var_24 = ((/* implicit */unsigned short) (+(arr_17 [i_5 + 1])));
    }
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_10)) ? (1419086141) : (var_9))))))));
}
