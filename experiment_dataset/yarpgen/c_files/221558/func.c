/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221558
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
    var_12 = max((var_2), (-2003959360));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */short) arr_0 [7]);
        var_13 = arr_0 [i_0];
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_0 + 2] [i_0] [i_1] [8] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)10934))));
                    arr_11 [10] = ((/* implicit */short) (+((+(arr_0 [(short)6])))));
                    var_14 = ((/* implicit */int) min((var_14), (((((arr_2 [i_0]) % (((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (-770462206) : (((/* implicit */int) arr_5 [i_2]))))))));
                }
            } 
        } 
        arr_12 [i_0] [0] |= ((short) ((var_2) == (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_15 -= ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0])))));
            var_16 = arr_8 [i_0 + 2] [i_0];
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            arr_21 [(short)6] [(short)6] |= ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) arr_2 [i_4]))));
            arr_22 [i_4] [i_4] = ((/* implicit */short) arr_7 [i_0] [11] [11] [i_0 + 2]);
            var_17 = ((/* implicit */short) ((((1972120879) + (((/* implicit */int) var_8)))) >> (((((/* implicit */int) ((short) arr_16 [(short)0] [i_4] [i_0]))) + (14133)))));
            var_18 = arr_16 [i_0] [i_0 - 2] [i_0 - 2];
            var_19 = (+(arr_13 [i_0 - 1] [i_0]));
        }
    }
    var_20 = ((/* implicit */short) ((((1842276101) & (((/* implicit */int) (short)10915)))) - (((/* implicit */int) var_7))));
    var_21 = ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) (short)10929)))))) : (((/* implicit */int) var_5)));
}
