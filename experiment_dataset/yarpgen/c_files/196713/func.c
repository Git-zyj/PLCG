/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196713
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 *= max(((signed char)88), ((signed char)88));
        var_19 = arr_1 [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_2]), (var_1)))) ? (((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_2))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        var_21 = var_10;
                        arr_8 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_3 - 3] [i_3 - 3] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_2] [i_3] [i_3 - 3] [i_2]))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_3 - 2] [i_3 + 1] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_3 - 3] [i_3 - 1] [i_2])) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) arr_4 [i_2] [i_3] [i_3 - 1] [i_2]))))));
                    }
                    var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)89)))) >= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((-(((/* implicit */int) min(((signed char)109), ((signed char)-66))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) * (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (signed char)(-127 - 1))))))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_1))))))))));
    var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) max((var_4), (var_1))))))) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_17))))))));
}
