/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (var_11 - var_9);
    var_13 = (min(var_13, (((var_3 ? (max(((max(231, 0))), (var_0 / var_9))) : var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (((((8 ^ ((1 ? 901830839 : (arr_0 [i_1 - 2])))))) ? 6503866540337200435 : (((~(!var_1))))));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_15 ^= ((((((max(17849431813055957918, -79)) > ((var_4 ? 6503866540337200442 : 11942877533372351173))))) > (((!(((var_7 ? var_10 : -72))))))));
                        var_16 = -50;
                    }
                    var_17 = (((arr_1 [i_0]) ? (((~(arr_4 [i_0] [i_1] [i_1 + 1])))) : (((arr_4 [i_0] [i_0] [i_0]) | var_7))));
                    arr_11 [i_0] [i_0] [i_2] = (arr_5 [i_0]);
                }
            }
        }
    }
    var_18 = var_1;
    var_19 = (max(47, (!var_3)));
    #pragma endscop
}
