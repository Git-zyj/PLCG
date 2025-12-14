/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_12;
        var_17 = var_3;
        arr_4 [i_0] = 464838987455427674;
        var_18 = -464838987455427704;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 ^= (!var_6);
            var_20 = (-8787276228616225691 >= 8787276228616225690);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_21 ^= 9223372036854775788;
                            arr_15 [i_2] [i_2] [i_2] [i_1] [i_3] [i_0] [i_1] = (((((var_6 ? var_0 : var_3))) ? (arr_1 [i_4 - 1]) : (14336 - 1621225335796312746)));
                            var_22 ^= (((var_6 / 3970496664191904861) ? -2471 : ((3236507145 ? 14703 : -464838987455427708))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 ^= var_16;
            arr_18 [i_0] [i_0] [i_0] = -3236507151;
            var_24 = 1;
            arr_19 [i_0] [i_0] = (arr_13 [i_0] [i_5] [i_5] [i_0 + 2] [i_0 + 2] [i_0 + 4] [20]);
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_25 ^= (arr_14 [i_6] [i_6] [i_6] [i_6] [i_0]);
            var_26 ^= ((!(arr_7 [i_0 + 2] [i_0 + 2])));
        }
    }
    var_27 = 0;
    var_28 = 28;
    #pragma endscop
}
