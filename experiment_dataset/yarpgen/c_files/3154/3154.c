/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 *= (min(((max(var_1, (arr_1 [i_0 - 2])))), (((arr_1 [i_0 - 2]) ? 18446744073709551615 : (-2147483647 - 1)))));
        arr_3 [i_0] = (min(-938214099, var_9));
        var_13 = (arr_2 [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_4 [i_1]);
        arr_7 [i_1] = (0 && var_11);
        var_15 &= 2147483647;

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_14 [i_1] [i_2] |= ((~((~(-2147483647 - 1)))));
                var_16 *= var_9;
            }
            arr_15 [i_1] [i_2 + 1] = (((arr_10 [i_1] [1] [i_2 + 1]) ? (arr_10 [i_2] [i_2] [i_2 + 1]) : (arr_10 [i_1] [i_2 + 1] [i_2 + 1])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_21 [i_4] = -8958235981547736054;
                        var_17 -= 5;
                        arr_22 [i_1] [i_1] [i_4] [i_5] [i_4] = ((~(arr_9 [i_2 + 1] [i_2] [i_2 + 1])));
                    }
                }
            }
        }
        var_18 *= ((~(((arr_6 [i_1] [i_1]) ? var_8 : var_8))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_19 -= (max(((min(((5 ? 0 : (arr_17 [i_6] [i_6] [i_6] [i_6]))), ((var_4 >> (65532 - 65525)))))), (max((223 % var_11), ((65524 ? 2375871013 : 938214109))))));
        arr_26 [i_6] &= ((((-(((arr_5 [i_6]) - (arr_25 [i_6] [i_6])))))) ? (min(var_11, ((max((arr_16 [i_6] [i_6]), 2147483647))))) : ((((arr_5 [i_6]) ? (arr_9 [i_6] [i_6] [i_6]) : (((arr_4 [i_6]) ? (arr_5 [i_6]) : (arr_12 [i_6] [i_6] [i_6])))))));
    }
    var_20 = var_9;
    #pragma endscop
}
