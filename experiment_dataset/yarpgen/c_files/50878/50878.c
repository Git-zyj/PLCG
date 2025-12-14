/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_0));
    var_13 = ((4856 ? var_0 : ((var_9 ? -var_10 : var_3))));
    var_14 = 64422;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = max(((1113 / (max(8795019280384, (arr_0 [i_0]))))), ((min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_1 - 1] [i_1] [i_1 + 2])))));
                    var_16 = (min(var_16, (((-((-(arr_8 [i_1 - 1] [i_2]))))))));
                    arr_9 [16] [i_1] [i_2] [14] = (((~var_9) ? -4930180771692797762 : (min((arr_4 [9]), var_3))));
                    var_17 = (min(var_17, (((((min(var_11, (((var_6 / (arr_0 [i_1]))))))) ? (8510261081734620108 / var_5) : 64411)))));
                }
            }
        }
    }
    #pragma endscop
}
