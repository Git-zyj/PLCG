/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (max(3523665855506209682, 678554586))));
    var_15 = (((((~678554605) & (~var_6)))) ? var_13 : var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_2 [i_2] [i_2])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_17 -= (!678554608);
                        var_18 += (arr_12 [i_0] [i_1] [i_2] [i_2]);
                        var_19 = ((((17311 ? var_12 : (arr_12 [i_0] [i_1] [i_1] [i_0]))) / var_0));
                        var_20 = (var_2 >= var_3);
                        var_21 = 15681;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_22 = (((arr_8 [i_0] [i_1] [i_2] [i_0]) && 1));
                        var_23 = ((!((((arr_2 [i_0] [i_0]) ? (arr_12 [i_4] [i_4] [i_4] [i_0]) : 1)))));
                        var_24 *= var_5;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_25 = (((~(arr_3 [i_0] [i_0] [i_0]))));
                        arr_18 [i_0] [i_1] [i_2] [i_0] = (arr_4 [i_0] [i_1]);
                    }
                }
            }
        }
        var_26 = var_8;
        arr_19 [i_0] = (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? var_7 : -678554585));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_27 = (arr_1 [4]);
        var_28 = (max(var_28, ((((max(-678554634, var_10)) - var_2)))));
        arr_23 [i_6] = (~var_1);
    }
    #pragma endscop
}
