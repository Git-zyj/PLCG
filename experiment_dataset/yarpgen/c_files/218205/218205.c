/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((-(arr_0 [i_0] [i_0])))) ? ((~(var_13 * var_3))) : ((((~var_11) ? (((!(arr_1 [i_0])))) : (arr_1 [i_0]))))));
        var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (max((max(((((var_16 + 2147483647) >> (((arr_1 [i_0]) - 3024))))), ((~(arr_0 [i_0] [i_0]))))), (min((!2147483647), (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_18 = ((~(((!(arr_7 [i_1]))))));
        var_19 |= ((((((var_4 || (arr_4 [i_1])))) + (((-127 - 1) / 2147483639)))) >= (((arr_7 [i_1]) ? ((var_3 & (arr_6 [i_1]))) : 2147483647)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 = (min(var_20, (((0 ? 1 : 2147483647)))));
                    var_21 ^= (max(((-var_3 ? ((-(arr_11 [i_1] [i_1]))) : (arr_13 [17] [i_2] [i_1] [i_1]))), 239));
                    var_22 = ((!((min((max((arr_6 [i_2]), (arr_7 [i_3]))), 1)))));
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_23 = (((arr_18 [i_6]) | (~1)));
                    var_24 = 1;
                    var_25 = (max(var_25, -2147483647));
                }
            }
        }
        var_26 = (max((~0), (!1)));
        var_27 ^= (var_4 <= var_1);
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 24;i_8 += 1)
        {
            {
                var_28 = (max(var_28, -2147483647));
                arr_24 [i_7] [i_7] |= 21280;

                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    var_29 += (min((arr_26 [i_7] [i_7] [i_7] [i_7]), (arr_25 [16] [1] [15] [13])));
                    var_30 = (min(var_30, var_5));
                    var_31 = ((-var_13 ? (arr_21 [i_8]) : (arr_21 [i_7])));
                }
                var_32 ^= ((((((arr_22 [i_7]) | var_9))) ? ((((((arr_20 [i_7] [i_8]) ? 1 : 1))) ? var_7 : (~var_3))) : var_9));
            }
        }
    }
    var_33 = (((var_2 * -0) - var_9));
    #pragma endscop
}
