/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41058
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
    var_10 = min((max(((short)-4983), ((short)28233))), (var_2));
    var_11 -= ((/* implicit */short) (((~(((/* implicit */int) ((short) (short)-26474))))) | ((+(((((/* implicit */int) var_1)) / (((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            arr_5 [(short)6] [i_0] [(short)7] = ((short) arr_4 [i_0 - 1] [i_1 - 1]);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_12 = ((/* implicit */short) ((((/* implicit */int) (short)32765)) ^ (((/* implicit */int) (short)0))));
                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_2] [(short)8])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_2] [i_0])) : (((/* implicit */int) var_5))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    arr_12 [i_2] [i_1 + 1] [i_0] [(short)10] = ((/* implicit */short) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_7))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] [i_1 + 1] [(short)8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)24454)) : (((/* implicit */int) (short)26474))));
                    var_15 ^= ((short) var_5);
                    var_16 += ((short) ((short) var_5));
                    /* LoopSeq 2 */
                    for (short i_4 = 4; i_4 < 23; i_4 += 4) 
                    {
                        var_17 += var_3;
                        var_18 *= ((/* implicit */short) (((~(((/* implicit */int) (short)-26470)))) == (((/* implicit */int) arr_1 [i_0 - 1]))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_0] [i_1 + 2] [i_2])) & (((/* implicit */int) var_1))));
                    }
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_1 + 1])) + (2147483647))) << (((((((/* implicit */int) var_5)) + (9479))) - (5))))))));
                        arr_19 [(short)0] [(short)0] [i_2] [i_0] [(short)0] = ((/* implicit */short) (-((+(((/* implicit */int) (short)-13291))))));
                    }
                }
            }
            var_21 = ((/* implicit */short) ((((/* implicit */int) (short)-30912)) + (((/* implicit */int) (short)-5))));
        }
        arr_20 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0] [i_0 + 1]))));
        arr_21 [i_0] = ((short) arr_3 [i_0] [i_0 - 1]);
    }
    var_22 = var_0;
}
