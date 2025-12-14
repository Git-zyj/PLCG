/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246786
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8189128484196659043LL))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1523868046U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 2]))) : (((unsigned int) arr_0 [i_1 + 3] [i_1]))));
                var_14 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((-1450622817) + (2147483647))) >> (((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))));
}
