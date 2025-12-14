/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -27;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 + 2] = var_12;
        arr_3 [5] [i_0] = ((13779271618922753282 * (!-1)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = ((~(arr_1 [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, ((((~1) != var_0)))));
                        var_19 = (max(var_19, ((((arr_10 [20] [i_1] [i_3]) | ((-2158341837577041991 ? (arr_4 [i_0 + 2] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_3]))))))));
                        arr_13 [i_0 + 3] [i_1] [i_2] [5] [i_3] = ((var_14 ? (((var_1 ? (arr_9 [i_0] [i_1] [i_0] [i_3]) : (arr_9 [i_0] [i_1] [i_2] [i_3])))) : (((-6852462375592389379 / var_13) + ((-(arr_4 [6] [6])))))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_20 = (max(var_20, -549129485160499160));
            var_21 = ((!((((((arr_8 [i_0] [i_0] [i_0] [i_4]) < 549129485160499160)) ? (arr_14 [i_0 + 3] [i_0 - 1]) : 6852462375592389378)))));
            var_22 = (max(var_22, (((-var_3 != (arr_12 [i_0] [i_4] [i_0 + 1] [i_0 + 2] [i_0] [i_0]))))));
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_23 = ((((((~(arr_9 [i_5] [i_5] [i_5] [i_5]))) + var_15)) != (arr_7 [i_5] [i_5])));
        arr_22 [i_5] = -var_0;
        var_24 ^= (max(((-(arr_21 [i_5]))), (arr_19 [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_25 += var_12;
        arr_25 [i_6] = ((((((~222) / ((2147483647 ? -6852462375592389379 : var_15))))) ? (max(((6852462375592389379 & (arr_17 [i_6]))), (((var_3 > (arr_4 [i_6] [i_6])))))) : (max((~var_6), var_6))));
        var_26 = ((var_9 >= (arr_10 [i_6] [i_6] [i_6])));
        var_27 = ((((~(arr_14 [i_6] [17])))) ? (!66) : ((((arr_16 [i_6] [i_6]) ? ((((arr_1 [i_6]) != 939824588))) : ((184 + (arr_23 [i_6])))))));
        var_28 = (min(2059519104, 896));
    }
    #pragma endscop
}
