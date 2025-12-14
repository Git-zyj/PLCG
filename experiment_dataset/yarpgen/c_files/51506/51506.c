/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((var_5 - var_1), (((var_13 ? var_10 : var_3)))))) ? ((max(var_3, var_7))) : (((max(0, 4186760870289735372)) * var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = arr_3 [i_0] [i_0] [i_1];

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = (max(var_18, var_14));
                    var_19 = (min((max(((max(var_11, 27531))), (min(14259983203419816244, var_0)))), ((((arr_9 [i_0] [i_1]) ? (var_15 * 0) : -var_3)))));
                    arr_12 [i_0] [i_0] = (min(-127, ((min((!var_2), (arr_4 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_20 = (((((((var_8 ? var_6 : var_4)) - (-28697 ^ var_3)))) ? (var_6 || var_11) : (~var_4)));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_21 -= (max((((arr_15 [i_3] [i_3]) ? (arr_15 [i_4 - 3] [i_5]) : -136)), (((arr_15 [i_5] [i_4]) ? (arr_15 [i_4 - 2] [i_5]) : (arr_15 [i_5] [i_4])))));
                    arr_21 [i_3] [0] [i_5] [i_5] &= -1;
                }
            }
        }
    }
    #pragma endscop
}
