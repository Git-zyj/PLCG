/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19782
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) arr_0 [i_1] [i_0]);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((/* implicit */int) ((unsigned short) ((arr_2 [i_0] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_12);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((var_19) < (((/* implicit */long long int) ((/* implicit */int) var_18))))))));
}
