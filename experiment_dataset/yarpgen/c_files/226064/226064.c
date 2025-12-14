/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-1048572 ^ var_6);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) ? (max(var_8, (var_2 + var_6))) : var_14));
        arr_2 [i_0] [0] = (((!4293918712) ? var_14 : (arr_1 [15])));
        var_17 = ((~(var_1 * var_1)));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_18 = (((4293918720 << (4293918735 - 4293918716))) | var_4);
        var_19 = (!var_10);
        arr_6 [i_1] [i_1] = (3124725842 ^ (-9223372036854775807 - 1));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_20 = (max(1, -198535200));
        var_21 = (min(((min(var_8, -198535200))), ((var_9 / (min((arr_1 [i_2]), var_5))))));
        arr_9 [i_2] = ((-(arr_7 [i_2 + 1])));
        arr_10 [i_2] = (arr_0 [i_2 + 2]);
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_22 = -var_1;
                        var_23 -= (((((arr_15 [i_6] [i_3] [i_3]) ? (arr_15 [17] [i_6] [i_5]) : var_10))) || (arr_17 [i_4] [i_4] [i_4] [i_4]));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        var_24 = (arr_17 [i_3] [i_4 - 1] [i_4 - 1] [i_7]);
                        var_25 = (arr_14 [i_5] [i_7]);
                        var_26 = (min(var_26, -23127));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        var_27 = ((((var_10 < (arr_22 [i_5]))) || var_12));
                        var_28 = (!(arr_27 [i_5] [i_3] [i_5] [i_8]));
                    }
                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        arr_30 [i_5] [i_5] = ((~(((!var_5) ? (min(1048587, (arr_24 [i_3] [i_3]))) : var_3))));
                        arr_31 [i_3] [i_3] [i_5] [i_3] = var_2;
                    }
                    var_29 = (min(var_29, 4293918712));
                }
            }
        }
    }
    var_30 = ((~((((14 | 3124725842) > (min(var_4, var_11)))))));
    #pragma endscop
}
