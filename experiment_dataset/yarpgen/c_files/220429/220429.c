/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        var_12 = (max(var_12, var_4));
                        arr_10 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1] = (max((arr_2 [i_0]), 976445035));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_13 = arr_0 [i_0];
                        var_14 = (((157365590 ? ((max(-157365611, var_6))) : (arr_9 [i_0] [i_0 + 2] [i_1] [i_0]))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 = 1937025075;
                        var_16 = (min(var_11, (arr_6 [i_5] [i_2] [i_1] [i_0])));
                    }
                    arr_17 [i_0] [i_2] = -24650;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_17 = ((((max(6500869797074147552, -157365605))) ? -24650 : 157365605));
                                var_18 = (min(var_18, var_10));
                                arr_23 [i_0] [i_6] [i_0] = (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                                var_19 = (max(var_19, (arr_14 [i_2] [i_2] [i_2] [1])));
                                var_20 = (arr_0 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 &= -157365581;
    var_23 = min(((((min(var_0, var_8))) ? (!var_6) : ((min(1, var_9))))), (min(((var_5 ? var_1 : -157365590)), var_1)));
    var_24 = var_8;
    #pragma endscop
}
