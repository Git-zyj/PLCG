/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [22] [i_3] |= (arr_2 [i_0]);
                        arr_12 [i_0] [i_0] [i_0] = (arr_7 [i_3] [1]);
                    }
                }
            }
            arr_13 [i_0] = ((!(((-(arr_0 [i_0]))))));
            var_19 = (max(var_19, 29402));
        }
        arr_14 [i_0] = (((arr_3 [i_0]) ? (arr_6 [i_0] [i_0]) : (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0])))));
    }
    var_20 = ((((var_2 ? var_2 : var_1))) ? ((-1201865579 ? 255 : -29423)) : (!var_7));
    #pragma endscop
}
