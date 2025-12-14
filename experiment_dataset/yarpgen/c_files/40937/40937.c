/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 = ((-(arr_6 [i_2])));
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] = ((((arr_3 [i_0] [i_0]) ? 115 : 8005251404466195195)));
                    }
                }
            }
        }
        var_14 = (min(var_14, -var_8));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (11120171159624033431 % var_6);
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_15 &= (47 != var_4);
                        arr_24 [i_4] [i_4] [i_6] [i_7] = var_8;
                        arr_25 [i_6] [i_4] [i_6] = (~(~var_5));

                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_16 = ((-(arr_13 [i_4] [i_4])));
                            arr_29 [i_4] [i_5] [i_5 + 1] = -var_9;
                            arr_30 [i_8 + 1] [i_8] [i_8 + 1] [i_4] [i_8] [i_8] [i_8 - 2] = ((!(((3766132466 ? var_6 : var_3)))));
                            arr_31 [i_4] [i_5 + 1] [i_5 + 1] [i_5 - 1] [0] = (((((4611873998124860961 ? -48 : (arr_17 [i_4] [i_5 + 2] [i_6])))) ? (~var_4) : (arr_6 [i_5 + 1])));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_35 [i_9] = ((-118 * (((38596 >= (arr_7 [i_9] [i_9]))))));
        var_17 -= 47;
    }
    var_18 = ((((((min(var_10, 3766132466))) ? (max(var_3, var_11)) : 34)) >= (max(((var_12 ? var_12 : var_11)), var_4))));
    var_19 = var_8;
    #pragma endscop
}
