/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(!var_8)));
    var_11 = 2095104;
    var_12 = (max(var_12, var_9));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_2 [4] [4] = ((((((arr_0 [i_0]) ? var_2 : (arr_1 [i_0])))) ? (arr_0 [1]) : (-1663817351 <= var_4)));
        var_13 |= (((arr_1 [i_0 - 2]) ? (1663817350 <= var_6) : 1));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (((((237729792690856830 ? var_9 : (arr_3 [i_1]))))) ? (!0) : ((((((arr_3 [i_1]) ? var_5 : var_1))) ? (~1879048192) : 1663817351)));
        var_15 = var_8;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_16 = (1663817350 >= var_3);
            var_17 -= (((((((((arr_11 [i_3]) ? var_7 : var_7))) ? (~-1663817351) : ((~(arr_9 [i_3])))))) ? 237729792690856822 : 7445411647003534059));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_18 = (((var_9 ? 1663817334 : 1663817351)));
                var_19 = -791861878075019762;
                var_20 = (min(var_20, (~var_4)));
                var_21 = (min(var_21, (((11073 ? 1663817340 : 36176)))));
            }
        }
        arr_15 [i_2] [0] = 10810;
    }
    #pragma endscop
}
