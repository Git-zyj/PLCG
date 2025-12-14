/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228690
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
    var_19 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    var_20 = ((/* implicit */short) max((var_20), ((short)11008)));
    var_21 = ((/* implicit */short) max((var_21), ((short)0)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_22 += var_14;
                arr_4 [i_0] [i_1] [(short)3] = min((arr_2 [(short)1] [(short)1]), (((short) (short)24770)));
                arr_5 [i_0] [i_1] = arr_0 [i_0];
                var_23 = ((/* implicit */short) max((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-17875)) : (((/* implicit */int) (short)16633))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                var_24 = max((((short) (short)-5636)), (min(((short)-4054), (arr_1 [i_0]))));
            }
        } 
    } 
}
