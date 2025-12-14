/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 201326592;
    var_13 = (!var_4);
    var_14 = ((max((min(var_4, var_6), 32767))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_4 [5] [20] = (arr_0 [i_1] [i_0]);
            var_15 = 201326593;
            var_16 = (arr_0 [i_1 - 2] [i_1 - 3]);
        }

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = (arr_7 [i_0]);
            var_18 = (arr_7 [16]);
            var_19 -= ((!(arr_5 [1] [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_20 -= ((~(arr_0 [15] [9])));
            var_21 = (arr_8 [3]);
        }
        var_22 &= (arr_3 [i_0]);
        var_23 = -0;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_24 |= (!2612579452303575766);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_25 &= ((~(arr_8 [i_4])));

                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        var_26 = (min(var_26, (((~((~(arr_15 [i_4]))))))));
                        var_27 = ((~(arr_17 [i_7 - 3] [i_7] [16] [i_7 + 2])));
                    }
                }
            }
        }
    }
    var_28 = -50;
    #pragma endscop
}
