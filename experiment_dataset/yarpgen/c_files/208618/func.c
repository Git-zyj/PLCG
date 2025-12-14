/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208618
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
    var_16 = (short)-4;
    var_17 = ((/* implicit */short) max((var_17), (var_14)));
    var_18 = ((/* implicit */short) max((var_18), (var_13)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */int) (short)-22517)), (((((/* implicit */_Bool) max(((short)-16112), ((short)-18)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-2479))))));
        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) ((short) arr_2 [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) max(((short)240), ((short)0))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_7 [(short)1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((short) (short)-22625)))));
        var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_21 = ((/* implicit */short) min((var_21), (((short) (short)32749))));
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) max((max(((-(((/* implicit */int) arr_5 [(short)22])))), ((~(((/* implicit */int) arr_6 [i_2] [i_2])))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                arr_15 [i_2] [(short)22] [(short)8] [(short)22] |= ((/* implicit */short) ((((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1])) ^ (((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 2]))));
                var_22 *= ((short) arr_4 [i_3 + 1] [i_4]);
                var_23 |= ((/* implicit */short) (+(((/* implicit */int) var_12))));
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                var_24 += ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_5] [i_5] [i_3 - 1]))));
                arr_18 [i_2] = ((/* implicit */short) (~(((((/* implicit */int) (short)-3321)) | (((/* implicit */int) var_15))))));
            }
            arr_19 [(short)21] [(short)21] [i_3 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_2]))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2]))));
            var_26 = ((/* implicit */short) (-(((/* implicit */int) (short)-32757))));
        }
    }
}
