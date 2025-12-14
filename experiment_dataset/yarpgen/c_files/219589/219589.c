/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [i_0] [4] [i_0] = (arr_2 [7] [i_1] [8]);
                        arr_10 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_1] = (var_0 - var_2);
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_1] = (arr_6 [i_0] [i_1] [i_1] [13]);
                        arr_12 [i_0] [i_1] [i_1] [i_3] = var_2;
                        arr_13 [i_2] [i_1] [i_2 - 1] = var_9;
                    }
                    arr_14 [i_1] = (min(-var_0, (arr_6 [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1])));
                }
            }
        }
    }
    var_10 = (((((var_6 ? (((996256094 ? var_9 : var_9))) : (min(var_8, var_2))))) ? ((max((~-1107148392), (!-1488260813)))) : ((((min(var_2, var_6))) ? var_9 : -var_8))));
    var_11 = ((-(~var_3)));
    #pragma endscop
}
