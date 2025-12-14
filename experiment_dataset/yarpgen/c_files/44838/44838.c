/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 += (17665317881353493696 ? (((arr_3 [i_0] [i_1]) ? (var_3 ^ 781426192356057902) : (35 || -1))) : (((7378472871096052409 ^ 40187) ? (min(-23915, 17665317881353493714)) : (max(781426192356057932, 4102687131)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_6 [i_1] [2] [i_1] [10] = var_5;
                    var_13 = ((var_0 - (var_10 >= var_2)));
                    var_14 = 30;
                    arr_7 [i_1] [i_1] = 1;
                }
            }
        }
    }
    var_15 += var_1;
    #pragma endscop
}
