/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248327
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_0 [(short)6]))))) >> (((((/* implicit */int) arr_0 [i_0])) + (20151)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(short)11]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((arr_0 [i_0]), ((short)32767)))))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))), (max(((short)28217), (arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-28217)) * (((/* implicit */int) (short)25212))))) ? (((/* implicit */int) max((arr_1 [i_0]), (var_8)))) : (((/* implicit */int) arr_1 [i_0])))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) (short)25204)) / (((/* implicit */int) arr_1 [i_0]))))))));
        var_13 -= arr_1 [i_0];
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) ((short) arr_6 [i_1 + 2] [i_1 + 1]))) % (((/* implicit */int) ((short) arr_5 [i_1] [i_1 - 2] [i_1]))))))));
            arr_7 [i_0] = ((/* implicit */short) (-(min((((/* implicit */int) ((short) var_3))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1 - 1]))))))));
            arr_8 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */int) (short)25195)) + (((/* implicit */int) (short)-25212))));
            arr_9 [i_0] [(short)20] = arr_1 [i_1];
            arr_10 [i_1 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(short)17] [(short)3] [(short)9])) && (((/* implicit */_Bool) arr_0 [i_0]))))), ((short)9780))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_13 [i_2] = (short)-25212;
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-29455)) ? (((/* implicit */int) (short)25211)) : (((/* implicit */int) (short)-9777))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_23 [(short)5] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_2] [i_3])) << (((((/* implicit */int) arr_22 [i_2] [i_2])) + (25079)))));
                            arr_24 [i_0] [i_2] [i_3] [(short)6] [(short)6] = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_0]))));
                            var_16 += ((/* implicit */short) (~(((/* implicit */int) (short)-25227))));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */short) ((((/* implicit */int) (short)896)) * (((/* implicit */int) (short)25217))));
                var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_2] [i_3]))));
            }
        }
        arr_25 [i_0] |= ((/* implicit */short) (+((~(((/* implicit */int) (short)18239))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        arr_28 [i_6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_6] [i_6] [i_6]))));
        arr_29 [i_6] = ((/* implicit */short) (~(((/* implicit */int) (short)-20))));
        var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_6])))))));
    }
    var_20 = var_6;
    var_21 = var_10;
}
