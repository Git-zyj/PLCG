/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232011
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
    var_15 = ((/* implicit */short) var_9);
    var_16 = ((/* implicit */_Bool) -231294885);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(min((((/* implicit */int) min((arr_2 [i_1]), (arr_4 [i_1])))), (((arr_5 [i_0] [i_1]) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) arr_4 [i_0])))))))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max(((((~(((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_13)))), (min((((/* implicit */int) arr_5 [i_0] [i_0])), (((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)-7597)))))))))));
                arr_6 [i_1] [i_1] [i_1 - 2] = ((/* implicit */_Bool) (~(((arr_3 [i_1 - 3]) >> (((/* implicit */int) (!(arr_5 [i_0] [i_0]))))))));
            }
        } 
    } 
}
