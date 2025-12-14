/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54648
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
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (-2147483647 - 1));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)208)) + (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                var_14 = ((/* implicit */int) arr_0 [i_0] [i_0]);
            }
        } 
    } 
}
