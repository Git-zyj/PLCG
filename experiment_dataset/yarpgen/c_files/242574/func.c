/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242574
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (((((~(((/* implicit */int) arr_1 [i_0] [i_0])))) + (2147483647))) << (((((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) - (23)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(signed char)2] [i_0])) : (((/* implicit */int) var_5))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? ((+(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_9))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_1]);
                        arr_11 [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */int) (short)32512)) | (((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-1))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] |= ((/* implicit */short) var_9);
                    }
                } 
            } 
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
            arr_15 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
        }
        arr_16 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
        var_16 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))));
        var_17 = ((/* implicit */signed char) var_6);
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) min((var_3), (((/* implicit */short) min((var_0), (var_1))))))) > (((((/* implicit */_Bool) (short)32764)) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_7)))) : (((/* implicit */int) (short)-1)))))))));
    var_19 &= ((/* implicit */signed char) (-((-((+(((/* implicit */int) (short)29599))))))));
}
