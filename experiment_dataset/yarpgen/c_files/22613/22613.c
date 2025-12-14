/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 *= 69;
        var_12 = 0;
        var_13 = (min(var_13, ((((!166) ? ((var_5 ? 216431325 : 8196)) : -84)))));
        arr_2 [i_0] = (!var_3);
    }
    var_14 &= var_1;
    var_15 &= ((137 | ((1310973016 ? 216431322 : 1))));
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                arr_9 [i_2] [i_2] [i_1] = (((((!(66 == 190)))) - -84));
                var_17 = (min(var_17, (((!(var_4 <= 1))))));

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_18 = var_7;
                        arr_17 [i_1] [i_3] = (-262143 < 0);
                        var_19 = (min(var_19, ((max(((190 ? var_2 : var_6)), (((244 ? (992950019 & 189) : 2027817908))))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_3] [i_2] [i_2] [i_3] [i_5] = -102;
                        arr_23 [i_3] [i_3] = (((1610612736 || 4261412864) > 95));
                        var_20 = (min(var_20, 32505856));
                    }
                    var_21 = ((6109215423224016470 >= ((min(527428676, 2287780801)))));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_22 = (min(var_22, (0 & var_8)));
                    var_23 = 95;
                }
                var_24 = (!-2267149388);
            }
        }
    }
    #pragma endscop
}
