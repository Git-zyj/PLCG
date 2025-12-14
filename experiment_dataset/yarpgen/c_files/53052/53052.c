/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 -= (min((min((arr_0 [i_0]), (((1 << (var_13 + 92)))))), ((((min((arr_1 [i_0]), 95)) - (var_2 & 1))))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] &= (((((~18446744073709551608) ? var_0 : (0 & 2013265920))) | (((((var_5 ^ (arr_11 [i_0] [i_0] [18] [i_3 + 1] [i_1])))) ? (var_13 & -24) : (arr_13 [i_1] [i_1 - 2] [i_4] [i_1] [i_3 + 4] [i_4])))));
                            var_17 = (min(var_17, 110397828));
                            var_18 = (var_3 * 254);
                            var_19 = ((var_6 <= (((arr_11 [i_0] [i_2] [i_3 + 3] [i_3 + 4] [i_3]) & 2774186478))));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_2] [i_0] [i_0] [i_0] = ((((((arr_7 [i_5] [i_5] [i_5] [i_5] [i_3 + 2]) - var_11))) ? (arr_8 [i_0] [i_1] [i_1] [i_3 + 1] [i_3 + 1] [i_1]) : (arr_7 [1] [i_1] [i_2] [i_0] [i_3 + 1])));
                            arr_19 [i_1 + 1] [i_2] = var_12;
                            var_20 = var_6;
                        }
                        arr_20 [i_2] [i_2] [i_2] [i_3 + 2] [6] [6] = ((var_12 + ((var_3 ? (arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [6]) : (arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 4] [i_3 + 1] [i_3])))));
                        arr_21 [19] [i_1] [i_2] [i_2] = ((((((max(110397821, var_2))) ? ((max(var_9, 1))) : (arr_12 [i_2] [i_0] [i_2]))) % (((1 ? var_4 : var_0)))));
                    }
                }
            }
            var_21 = (max(var_21, (arr_11 [i_0] [i_1] [i_1] [i_0] [i_0])));
            var_22 = (min(var_22, (((((((var_8 ? var_0 : var_1))) || 61696))))));
            arr_22 [i_0] [i_0] [i_1 + 2] = (min(-7568361532303011386, (min((var_9 ^ -7568361532303011403), var_15))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_23 ^= var_0;
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_34 [i_0] [i_6] [i_7] [i_8] [i_9] = max(((+(((-19756 + 2147483647) << (((arr_16 [i_9 - 1] [i_8] [i_7] [15] [i_0]) - 9557)))))), (((var_9 ? var_9 : 1))));
                            arr_35 [i_0] [i_6] [i_7 + 1] [i_8] [i_9] = ((var_1 ? (var_11 || var_3) : var_6));
                            arr_36 [i_9] [i_8] [10] [i_7] [i_6] [i_0] = (~((((var_2 ? var_2 : -1700562532)))));
                        }
                    }
                }
            }
            arr_37 [16] = (+((((var_9 >= var_11) || ((min(var_13, var_7)))))));
            arr_38 [i_0] [i_6] &= (min((((((var_0 ? 153 : var_3))) ? ((186588420 << (8665724603689719821 - 8665724603689719819))) : (arr_1 [i_0]))), (((((arr_33 [i_0] [18] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_3 : var_11))))));
            arr_39 [i_0] = (max(((((!(arr_27 [2]))))), (-1 || var_7)));
        }
    }
    var_24 = (((((((var_6 ? var_4 : var_0)) < ((var_0 ? var_1 : var_13)))))));
    #pragma endscop
}
