/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-1 | 6779098512315485194);
    var_18 -= ((((((var_12 ? var_2 : var_5)) <= ((var_5 ? var_15 : var_2)))) ? (!var_8) : (((!(var_3 * var_12))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0])));
        var_19 = (min(var_19, -var_1));
        arr_3 [i_0] = ((-(((var_13 == (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = (min(var_20, (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 = (((arr_10 [i_4] [i_4] [i_3 - 1] [i_3 - 1]) ? (arr_10 [i_4] [i_4] [i_3 - 1] [i_3]) : (arr_10 [i_4 + 3] [i_3 + 1] [i_3 - 1] [i_2])));
                        var_22 = (min(var_22, (!var_1)));
                        var_23 = ((var_12 < (6779098512315485186 != 6779098512315485187)));
                        var_24 |= (arr_10 [i_1] [i_2] [i_3 - 1] [i_4]);
                    }
                }
            }
        }
        var_25 = (-(arr_8 [i_1] [i_1]));
    }
    var_26 = (((var_3 * var_11) + var_8));
    #pragma endscop
}
