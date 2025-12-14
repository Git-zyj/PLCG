/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_10 = (max(var_10, var_4));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_11 = (((arr_6 [i_2] [i_2]) * (arr_6 [i_2] [i_2])));
                        arr_9 [i_0 - 2] [i_1] [i_0 - 1] [i_0] [i_1 + 1] [i_2] = (((arr_6 [i_0 + 1] [i_2]) || var_2));
                    }
                    var_12 &= (arr_3 [i_2]);
                    arr_10 [i_0 + 1] [i_0 - 1] [i_1] [i_2] = 24732;
                    var_13 = (arr_0 [i_0 + 1]);
                }
            }
        }
    }
    var_14 -= ((((((((var_9 ? 9223372036854775807 : var_9))) ? ((var_6 ? var_2 : 4419618364506686181)) : (((var_1 ? 3 : var_8)))))) ? var_7 : var_1));
    #pragma endscop
}
