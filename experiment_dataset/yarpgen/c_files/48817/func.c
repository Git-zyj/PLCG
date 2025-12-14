/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48817
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_1]) + (((min((arr_3 [i_0]), (((/* implicit */long long int) arr_5 [i_1])))) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) arr_3 [i_0]))) || ((!(arr_2 [i_0] [i_1 - 1]))))) && (((/* implicit */_Bool) min((min((arr_5 [i_0]), (var_4))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_18))))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((arr_4 [i_1] [i_1 - 1] [i_1]) + (9223372036854775807LL))) >> (((var_7) + (146611520)))))));
            }
        } 
    } 
}
