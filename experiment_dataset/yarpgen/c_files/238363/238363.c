/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (min(((~(arr_0 [i_0]))), (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((min(var_11, (arr_0 [i_0]))));
        var_15 = (min(var_15, ((max((((!((min(3038840952, 3663158756)))))), var_10)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_2] = ((((min(-97389185446119499, 5432))) ? -53 : ((min(0, 60103)))));
                        arr_13 [i_1] [0] [i_1] [i_1] = var_7;
                    }
                }
            }
        }
    }
    var_16 |= (min(((var_4 ? var_12 : (~var_12))), var_10));
    var_17 = (max((min((~var_3), var_0)), (((((max(var_3, var_2))) ? ((min(var_11, var_10))) : var_13)))));
    var_18 = ((!((max(((var_7 ? var_7 : var_0)), (!var_4))))));
    #pragma endscop
}
