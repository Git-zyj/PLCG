/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54823
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
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [(short)8] [(short)8])) != (((/* implicit */int) arr_3 [i_0]))))) < (((/* implicit */int) (_Bool)0))));
            var_17 = arr_6 [i_0] [(short)13];
        }
        for (short i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_18 = ((/* implicit */_Bool) ((short) (_Bool)1));
            var_19 = arr_4 [i_2] [i_0];
            arr_9 [i_2] = ((/* implicit */_Bool) ((short) ((short) (short)-5419)));
            arr_10 [i_2] [i_2] [(_Bool)1] = ((_Bool) arr_0 [i_0 - 2]);
        }
        arr_11 [i_0] [i_0] = ((/* implicit */short) ((arr_4 [i_0 - 2] [i_0 + 1]) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_7 [(_Bool)0] [(short)12] [(short)12]))))) : (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
    }
    var_20 = var_3;
}
