/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = 655529338;
                    arr_6 [i_0] [1] |= (var_1 - 154);
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((!((min(-3, -3)))))))));
        arr_11 [i_3] [5] = var_1;

        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_20 = (((((((max(1, 38482))) + ((max(1, var_13)))))) ? (((!(!1)))) : var_10));
            arr_15 [i_3 - 4] [i_4 + 1] = var_8;
            var_21 = (max(var_21, (1 == var_4)));
            var_22 = (-114 == ((1 ? 16380 : -3)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_21 [i_3 - 3] [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2] = (((((max(64, 90))) << (!var_6))));
                        var_23 = var_4;
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((((var_13 == 1) ? ((~(!var_3))) : -117)))));
                            arr_35 [i_3 - 3] [i_3] [i_8] [i_9] [i_10] [i_3 + 1] = (!38509);
                        }
                    }
                }
            }
            var_25 |= 1;
        }
    }
    var_26 = ((((!(((0 ? var_7 : var_11))))) ? (((!251) ? (!135) : (!1))) : var_9));
    var_27 |= var_10;
    #pragma endscop
}
