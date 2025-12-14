/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = 158;
        arr_4 [i_0] [i_0] &= -4;
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = (min(var_19, var_15));
        var_20 *= 2147483647;
    }
    var_21 = (127 | 85);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_22 = (min((((var_11 && ((var_11 >= (arr_10 [i_2] [i_3])))))), var_15));

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_23 = (~var_8);
                            var_24 = 3;
                            var_25 = 5241138739797049838;
                            var_26 = (max(var_26, ((((arr_12 [i_2]) ? (!14971110614786334291) : 164)))));
                        }
                    }
                    var_27 = var_15;
                    var_28 = ((-(!var_13)));
                }
            }
        }
    }
    var_29 = ((((170 + 170) | var_6)));
    #pragma endscop
}
