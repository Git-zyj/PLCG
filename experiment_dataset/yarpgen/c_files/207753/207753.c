/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] |= (((((29 & ((((arr_5 [i_0] [i_1]) == (arr_1 [i_0]))))))) >= (min((~var_10), (((arr_3 [9]) ? (arr_2 [i_0] [i_1]) : var_9))))));
                var_18 -= ((!((!(arr_1 [i_0])))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_19 = (arr_7 [3] [2] [i_2] [i_2]);
                    var_20 -= var_1;
                    arr_10 [i_0] [1] [1] [i_2] |= ((((min(101, 4021))) != 7));
                }
                var_21 -= (min(((103 ? 104 : 5017)), (!-5005)));
            }
        }
    }
    var_22 ^= (min(((!(var_2 & var_12))), ((!((min(94, 1)))))));

    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            arr_15 [14] [i_4 + 1] [i_4] = (((min(((((-23 + 2147483647) << (164 - 164)))), (min((arr_14 [i_3] [i_3]), 15519373092800990296)))) != (arr_13 [i_4] [i_4 + 1])));
            var_23 = (max((min((arr_13 [i_3 + 3] [i_3 + 3]), (arr_11 [i_3 - 1]))), (((1 ? var_9 : (~1))))));
            var_24 = (min((((arr_11 [i_3]) ^ 7)), 15349));
            var_25 = (min((arr_14 [i_3 + 1] [12]), ((((100 ? var_11 : (arr_11 [i_4])))))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_26 = (max((arr_11 [i_3 - 2]), (arr_17 [i_3 + 3])));
            var_27 ^= (!(((arr_12 [i_3] [i_3 - 1]) == (arr_12 [i_3 + 1] [i_3 + 3]))));
            arr_18 [i_3] [i_3] [i_5] = (((((~(var_0 <= 2632418975)))) ? (((((arr_12 [i_3 - 1] [i_3 + 2]) >= (arr_17 [i_5]))))) : var_12));
        }
        var_28 = (((((((4239 ? (arr_11 [i_3]) : var_4))) ? (min(var_1, 2927370980908561315)) : ((((arr_16 [i_3] [i_3]) ? (arr_12 [i_3] [4]) : var_13))))) << ((((((((arr_16 [i_3] [i_3]) ? 8329 : -4989))) ? 5130 : (((91 <= (arr_11 [i_3])))))) - 5106))));
    }
    var_29 = (min(var_29, (((((((var_8 ? var_8 : var_6)))) % var_3)))));
    #pragma endscop
}
