/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((!(min(1, 1))));
                var_16 = -1;
                var_17 = (max(var_17, ((((7008793221879581392 + 9641) ? var_13 : ((((((var_4 > (-127 - 1)))) / (~var_5)))))))));
                arr_6 [19] = ((~((max((var_6 > 1), (var_14 > var_2))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = ((((((1100565832 + (arr_3 [i_2]))) % ((((624895170114229548 || (arr_2 [i_3]))))))) - ((max(-45, (((arr_4 [i_0] [i_1] [i_3]) ? (arr_7 [i_0] [i_3] [19]) : var_10)))))));
                            arr_12 [9] [i_2] = (((max(244, var_11)) - ((min(var_2, (((arr_8 [i_0] [i_2] [i_2]) | (arr_1 [i_0]))))))));
                            var_19 = (arr_1 [i_0]);
                            var_20 *= (((var_4 * (arr_11 [i_3] [i_2] [i_1] [i_0]))));
                            var_21 = (min(var_21, (((-(arr_0 [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    var_22 -= ((~1) == (max((var_13 >> var_1), (var_1 || 15073))));
    var_23 -= -107;
    var_24 = (!var_12);
    #pragma endscop
}
