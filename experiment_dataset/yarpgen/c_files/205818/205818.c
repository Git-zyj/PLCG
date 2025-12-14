/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_13 ? (!var_0) : var_9)));
    var_17 = (min(255, 245760));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (((((var_4 / ((max(245758, (arr_4 [i_0] [i_1] [i_1]))))))) ? ((max(((((arr_5 [i_1]) == 3316077923))), 23920))) : ((14 ? (arr_5 [i_0]) : (~32767)))));
                var_19 = -3;
                var_20 = ((~((-(min(-6187, 4294721531))))));
            }
        }
    }
    #pragma endscop
}
