/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((-(var_3 / var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((-((((((arr_2 [i_1] [i_2]) ? var_1 : (arr_3 [i_0] [i_0])))) ? 570403279 : (max((arr_8 [i_2] [i_0] [i_1] [i_0]), var_6))))))));
                    var_16 &= (arr_2 [i_2] [i_1]);
                }
            }
        }
    }
    var_17 = ((var_1 ? (min((3724564016 + var_2), (var_4 % var_2))) : (((~(~var_3))))));
    #pragma endscop
}
