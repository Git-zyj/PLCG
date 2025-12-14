/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = (((((2147483647 ? var_5 : (((arr_0 [i_0] [i_0]) ? var_0 : var_11))))) ? ((~(((arr_2 [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0]) : 15785)))) : (arr_1 [3])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_14 -= (((arr_0 [i_1] [i_0]) & (arr_3 [i_0] [i_0] [9])));

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                arr_8 [i_1] [i_2] = ((~(((((var_1 ? (arr_6 [i_2]) : 2147483647))) / (arr_0 [i_0 - 2] [i_2 + 2])))));
                arr_9 [i_2] [i_1] [i_0 + 1] [i_0 + 1] |= var_7;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0]);
                var_15 = 32748;
                var_16 = (min(var_16, (((var_0 ? var_5 : ((4715 % (arr_0 [i_0 - 1] [7]))))))));
                var_17 = (min(((max(var_5, var_2))), var_6));
                var_18 = ((-(min(1097501894, ((((arr_3 [i_3] [4] [i_0 - 2]) >> (var_0 - 25226))))))));
            }
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_19 = (min((((var_8 && ((((arr_5 [i_0 + 1]) ? var_0 : 2147483647)))))), (min((arr_6 [i_0 - 2]), 2059056051))));
                var_20 = ((((!(16 + var_4))) ? (var_0 > -1852926319) : (arr_11 [i_4] [i_4] [i_4 + 2])));
            }
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_21 = ((-(arr_15 [i_0] [i_0] [i_6] [i_7])));
                        arr_26 [i_0 - 2] [i_0 - 2] [i_6] [i_7] [i_7] = ((((var_8 / (arr_21 [i_0 - 1] [i_6 + 1] [6] [i_7]))) | (((var_8 <= (!16))))));
                    }
                }
            }
            var_22 = (((arr_3 [i_0] [i_0] [i_0]) - 30986));
        }
        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {
            var_23 &= (arr_28 [i_8 - 3] [i_8 + 1]);
            arr_31 [i_8] = 26;
        }
    }
    var_24 |= ((0 ? ((min(2235911241, var_4))) : ((min(var_0, var_5)))));
    var_25 = ((((min(((max(var_0, 1048320))), (max(var_8, var_2))))) ? ((max((min(14445, var_0)), var_5))) : var_8));
    #pragma endscop
}
