/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 &= (var_15 >> (var_6 - 20703));
    var_21 -= 0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 += var_13;
                    var_23 = (min(var_3, (max(((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))), ((1 / (arr_3 [i_0 - 1] [i_1])))))));
                    arr_8 [14] [14] [i_0 - 1] = 34;
                    arr_9 [i_0 - 1] [14] [i_0 - 1] = (arr_6 [i_2] [i_2] [i_1 + 1] [i_0 - 1]);
                    arr_10 [i_0] [19] [i_2] = (~var_2);
                }
            }
        }
    }
    #pragma endscop
}
