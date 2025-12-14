/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((232 ? var_12 : var_2))), var_1));
    var_20 = var_11;
    var_21 = (!var_6);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = (max(var_22, ((!((max(var_6, (min(var_18, var_3)))))))));
                        var_23 = (min(var_23, ((((arr_4 [i_0] [i_1 + 4]) && (!18446744073709551615))))));
                        var_24 += ((((!(arr_3 [i_1 - 1] [i_1 + 3])))));
                    }
                }
            }
        }
        var_25 = var_15;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_26 -= (((arr_14 [i_4] [i_5]) != 8));
                    arr_15 [i_0] |= (!var_18);
                }
            }
        }
        var_27 = (arr_0 [i_0] [i_0]);
        var_28 = (((((var_17 == ((~(arr_5 [4] [i_0] [i_0])))))) ^ (!3146902235)));
    }
    var_29 = ((var_12 ? (var_4 & var_4) : var_17));
    #pragma endscop
}
