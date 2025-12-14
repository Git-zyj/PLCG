/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((3495912767 ? 0 : 3132085154524570533))) ? var_2 : (((-9935 ? 1 : var_9)))))) < var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (var_8 > var_14);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_9));
                                var_18 = (arr_7 [i_0] [i_1] [i_2] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_19 = 1;
        var_20 = ((var_2 ? var_2 : 3495912752));
        var_21 = (max(var_21, (arr_11 [i_0] [4] [i_0] [5] [5])));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((var_4 & ((var_7 ? 0 : 1)))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_23 = (min(var_23, (((var_2 ? ((((var_9 <= var_1) ? var_7 : var_7))) : ((((((arr_12 [2] [i_7] [i_7] [9] [i_5]) ? var_3 : var_7))) ? (((var_5 * (arr_1 [i_5])))) : (((arr_3 [i_5] [7]) ? 799054530 : var_4)))))))));
                        arr_21 [i_5] [i_5] [i_7] [i_8] [0] [i_8] = (max((((var_10 ? 5 : var_2))), (((-32711 / -24) ? var_8 : (max(var_0, var_4))))));
                        var_24 &= (((((var_5 ? var_12 : (((var_7 ? 4633 : -24)))))) ? (((var_0 ? ((var_6 << (4626 - 4614))) : (1 <= var_7)))) : 2147483647));
                    }
                }
            }
        }
        arr_22 [i_5] [i_5] = (((58314 < var_7) ? ((((var_13 << (var_11 - 13977251510413220373))) ^ var_9)) : (((var_7 == (arr_8 [i_5]))))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_25 = var_11;
        var_26 &= (((var_6 ? var_13 : 5610229486476058736)) > 24990);
        var_27 = var_5;
    }
    var_28 = (max(var_28, var_11));
    #pragma endscop
}
