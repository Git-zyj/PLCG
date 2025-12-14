/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196537
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = (short)-3659;
                    arr_8 [i_1] [i_1] [i_1] = var_4;
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [i_0])) & (((/* implicit */int) arr_5 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) arr_1 [i_3] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
            arr_13 [(short)1] [i_3] = ((int) arr_2 [i_0]);
            arr_14 [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (var_7) : (arr_10 [i_0] [i_3]));
            arr_15 [i_3] [i_3] = ((/* implicit */int) ((short) arr_4 [i_0] [i_3]));
            arr_16 [i_3] [i_3] = ((/* implicit */short) (+(var_7)));
        }
    }
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) || (((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_10 [i_4] [i_4]))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-9893)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)9913)) : (((/* implicit */int) arr_5 [i_4] [i_4]))))) ? (((422216164) & (1365717577))) : (arr_18 [i_4]))))));
    }
    var_17 = var_12;
    var_18 -= ((/* implicit */short) var_12);
    var_19 = ((/* implicit */short) var_12);
}
