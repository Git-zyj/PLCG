/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 &= max(1, 1);
                    var_15 = (((arr_0 [12] [i_0]) && (((var_9 ? var_6 : var_12)))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        var_16 = (max(var_16, ((((((1 ? 1 : 1))) || 0)))));
        arr_12 [i_3] = (arr_4 [i_3 + 2] [i_3]);
        arr_13 [0] |= (arr_10 [i_3 + 1]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_17 = var_0;
        arr_17 [1] [i_4] = ((!(arr_4 [i_4] [i_4])));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    {
                        var_18 = (max(var_18, ((((!var_6) || 4131700348252211849)))));
                        arr_27 [i_6] [i_6] [i_7] [i_6] = ((var_13 ? var_7 : -18153));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((min(var_13, (arr_15 [i_8] [i_8])))))));
        var_20 = ((min(var_5, (arr_5 [i_8] [i_8]))));
    }
    #pragma endscop
}
