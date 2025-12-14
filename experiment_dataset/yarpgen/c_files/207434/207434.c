/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((~((-1 ? var_11 : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((((-19281 >= 1) ? 535822336 : (!-5804206633336401705)))) ? (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? var_12 : 1)) : (535822336 ^ var_3)))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((!(arr_4 [i_0] [i_1] [i_3])));
                            arr_11 [i_0] = (max(0, 6782491437842953064));
                        }
                    }
                }
                var_16 = ((min(((((arr_4 [i_0] [i_0] [i_0]) > 1))), ((1 ? -94 : 130023424)))) == ((min(((1 ? (arr_4 [i_0] [i_0] [i_0]) : var_6)), var_5))));
                var_17 = 1;
                var_18 = (((~(min(13806562961380472685, var_7)))));
                var_19 = (min((107 - 54246), (((var_1 && (!1))))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
