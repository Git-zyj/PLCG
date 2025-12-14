/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229887
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) arr_4 [i_1] [i_1]);
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) -1852778697)), (-1LL)));
                var_19 = ((/* implicit */long long int) arr_2 [i_0 + 2] [i_1]);
            }
        } 
    } 
    var_20 = max((((/* implicit */long long int) ((((var_3) + (2147483647))) >> (((((((/* implicit */long long int) var_11)) ^ (var_13))) - (8171548862055877721LL)))))), (((((/* implicit */_Bool) var_12)) ? (-18LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))));
}
