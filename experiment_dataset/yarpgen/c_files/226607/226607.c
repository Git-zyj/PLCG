/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_11 << (min(var_7, var_17))))) ? ((-((var_11 ? var_0 : var_6)))) : (max(var_15, var_8))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [11]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [3] [i_1] [3] = ((((min((arr_3 [i_2]), var_4)) % var_9)) >> (((max(var_16, (min(18014398492704768, (arr_6 [i_0] [i_0] [7]))))) - 4942)));
                    arr_12 [11] [i_1] [11] &= (-(max(((var_6 >> (((((-2147483647 - 1) - -2147483635)) + 35)))), (arr_7 [1]))));
                }
            }
        }
        arr_13 [i_0] = (((((((max(51218, var_16))) ? var_17 : 24609))) / -1));
        arr_14 [i_0] [i_0] = (23924 ? (((~((min(5, (arr_9 [i_0] [i_0] [i_0] [i_0]))))))) : (max(var_16, (arr_6 [i_0] [i_0] [i_0]))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] |= ((~((~(arr_15 [i_3])))));
        arr_18 [i_3] = var_0;
        arr_19 [i_3] [i_3] = (arr_15 [i_3]);
        arr_20 [i_3] [7] &= ((-5 ? -5 : (((((arr_16 [i_3] [0]) ? var_5 : var_6)) + -21127))));
        arr_21 [i_3] = ((~((~(min((arr_16 [i_3] [i_3]), var_2))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_25 [i_4] [i_4] = ((-((-5853 ? -5 : 250))));
        arr_26 [i_4] = var_0;
        arr_27 [i_4] [i_4] |= ((((!(arr_23 [i_4] [i_4])))));
    }
    var_21 = var_18;
    #pragma endscop
}
