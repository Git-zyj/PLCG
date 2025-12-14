/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233779
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
    var_18 = ((/* implicit */int) max((13U), (((/* implicit */unsigned int) 1807960123))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 = 1734024465;
                var_20 = max((((/* implicit */unsigned int) ((unsigned char) 4095U))), (((((/* implicit */_Bool) 10686357687143549947ULL)) ? (arr_2 [i_1] [i_1 + 1]) : (arr_2 [(signed char)6] [i_1 - 1]))));
            }
        } 
    } 
}
