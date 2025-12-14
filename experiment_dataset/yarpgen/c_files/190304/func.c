/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190304
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-((-(((/* implicit */int) ((_Bool) arr_1 [i_0]))))))))));
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) max((arr_0 [i_0 + 1]), (var_10)))) : (((/* implicit */int) var_9)))) + (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */signed char) min(((!(var_2))), (min((arr_3 [i_0] [(_Bool)1] [i_0 + 1]), (arr_3 [i_0] [i_1] [i_0 + 1])))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min(((-(((/* implicit */int) var_10)))), ((+(((/* implicit */int) min((var_8), (((/* implicit */short) var_2))))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])))))));
                            var_19 = ((/* implicit */signed char) arr_8 [i_3]);
                            arr_15 [i_0] [i_3] [i_4] [i_4] [i_1] [i_0] = var_5;
                            arr_16 [(short)2] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0 + 1] [i_3 + 1] [i_4])) > (((((/* implicit */_Bool) arr_13 [i_0 + 1] [(short)3] [i_2] [i_3] [i_4] [i_1] [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_3] [i_1] [i_2]))))));
                        }
                        arr_17 [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) var_13)), (min((((((((/* implicit */int) arr_7 [i_3] [i_2] [(_Bool)1] [(_Bool)1])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (12055))))), (((/* implicit */int) max((((/* implicit */short) var_7)), (arr_9 [i_0] [i_0 + 1] [(short)4]))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) ((var_2) ? (((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_0 + 1] [i_0 + 1] [(signed char)4]))))) ? (((/* implicit */int) min((arr_4 [i_0] [(_Bool)1] [i_0] [(short)15]), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [(short)7] [i_0] [i_0])) : (((/* implicit */int) var_0))))))));
    }
    var_21 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
}
