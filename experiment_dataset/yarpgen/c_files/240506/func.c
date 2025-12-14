/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240506
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))))) * (((/* implicit */int) var_14)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), ((short)977)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_2)) - (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */int) arr_1 [(short)10])) <= (((/* implicit */int) min(((short)32767), (var_3)))))) ? (((/* implicit */int) (!(((((/* implicit */int) arr_1 [(short)12])) != (((/* implicit */int) var_0))))))) : (((/* implicit */int) arr_1 [(short)10])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    var_17 |= ((short) arr_4 [i_2] [i_3 + 1]);
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_3] [i_3 + 3])))))));
                    var_19 -= ((/* implicit */short) (-(34359738367LL)));
                }
            } 
        } 
    }
}
