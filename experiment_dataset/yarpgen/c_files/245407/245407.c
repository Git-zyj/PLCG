/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-22613 ? 44 : (min(11471531289147060257, var_7)))));
    var_18 = min(((var_4 ? (((var_1 >> (var_13 - 33399)))) : var_2)), (((((var_0 ? var_4 : -2147483629))) ? ((var_3 ? var_10 : var_1)) : 217)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_15 ? (((arr_0 [i_0] [i_0]) ^ (((arr_1 [i_0]) ? var_5 : (arr_0 [i_0] [i_0]))))) : (((min(var_5, var_3)) - (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 13977005112791407544));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = 5897;
                    arr_9 [i_0] [i_1] [i_1] = ((arr_5 [i_0] [i_1]) <= (var_13 ^ var_10));
                    arr_10 [i_1] [i_1] = (((((((-(arr_0 [i_0] [i_2]))) & (arr_5 [i_1] [i_1])))) ? var_6 : var_12));
                    var_20 = ((~(arr_6 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = (((max(3246477350, (arr_11 [i_3] [i_3])))) ? (arr_4 [i_3] [i_3] [i_3]) : (((((arr_0 [i_3] [i_3]) || (arr_0 [i_3] [i_3]))) ? (arr_1 [i_3]) : (max(4294967295, (arr_8 [i_3] [16] [i_3] [16]))))));

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            var_21 -= var_7;
            var_22 = 34162;
            arr_18 [i_4] [i_4] [i_4] = 0;
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_22 [i_5] [i_3] = ((((arr_12 [i_3] [i_5]) || ((((arr_4 [i_3] [i_5] [i_3]) ? (arr_12 [i_3] [i_5]) : 8646911284551352320))))) || ((!((var_10 && (arr_5 [i_3] [i_5]))))));
            var_23 &= (((max(((var_2 ? (arr_4 [i_5] [i_5] [i_3]) : var_11)), (((arr_6 [i_3] [i_5] [i_5]) ? 102 : var_8)))) != 52023944));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            var_24 = (min((min(((max((arr_4 [i_6] [i_6] [i_6]), (arr_12 [i_3] [i_6])))), (arr_23 [i_3]))), (((arr_15 [i_3] [i_6] [i_3]) ? var_11 : (arr_15 [i_3] [i_6] [i_6])))));

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_25 = (max(var_25, (((!((((arr_11 [i_3] [i_3]) << (((arr_14 [i_3] [i_3] [i_3]) ? var_3 : var_8))))))))));
                arr_29 [i_3] = ((-(!0)));
            }
        }
        var_26 = (((arr_20 [i_3] [i_3]) ? -1 : (255 && 260096)));
    }
    var_27 = (((((~(var_14 && var_10)))) ? var_8 : var_12));
    #pragma endscop
}
