/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((!(((var_5 ? var_4 : -var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 ^= (((7682478142067218902 ? var_3 : (-127 - 1))));
                    arr_10 [i_0] [i_1] [i_2 + 1] = (!var_1);
                }
            }
        }

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_14 = (arr_13 [i_0]);
            var_15 ^= ((-(arr_7 [i_0] [i_0] [i_3] [i_3])));
            var_16 ^= ((arr_1 [i_0] [i_3]) && var_7);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_17 = ((arr_14 [i_0] [i_4]) < (!var_10));
            arr_18 [i_0] [i_0] [i_0] = (((arr_16 [i_0] [i_4]) <= (arr_7 [i_0] [10] [i_0] [i_0])));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_18 -= (arr_19 [i_0] [i_0]);
            var_19 ^= ((((15829868164686659937 - (arr_3 [i_5]))) + (1143751029 && 7)));
            var_20 *= ((!(~var_9)));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_21 -= (((((~(arr_12 [i_0])))) && var_3));
            arr_25 [8] [i_0] = (((((arr_22 [i_0] [i_0]) / var_2)) * (!var_1)));
            arr_26 [i_0] [i_0] [i_6] = (((arr_15 [i_0]) == (arr_15 [i_6])));
        }
        var_22 = (max(var_22, var_10));
        var_23 ^= (((((arr_4 [i_0] [i_0] [i_0]) ? var_3 : (arr_7 [7] [i_0] [i_0] [i_0]))) <= ((-(arr_24 [i_0])))));
        arr_27 [i_0] = 11064;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_24 = (max(var_24, var_9));
        var_25 = (((arr_17 [i_7]) && (((var_5 ? 35 : (arr_22 [i_7] [i_7]))))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        arr_34 [i_8] = ((~(min((min((arr_13 [i_8]), var_3)), (((-(arr_12 [1]))))))));
        var_26 = (min(var_26, (((~(arr_21 [i_8]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_27 = (arr_6 [1] [i_9]);
        var_28 = var_0;
    }
    #pragma endscop
}
