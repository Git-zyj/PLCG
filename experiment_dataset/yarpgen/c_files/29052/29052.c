/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (max(var_13, var_9));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 = (((arr_1 [i_0] [i_1]) && var_8));
            var_15 = (2147483647 >> 10);
            var_16 = (((-2147483647 - 1) || 0));
            var_17 = var_2;
            var_18 = (((arr_1 [i_0] [i_1]) && (((~(arr_0 [i_1]))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    var_19 = (max((max((min(18446744073709551615, (arr_2 [i_3]))), (((9223372036854775795 ? 9223372036854775807 : 0))))), -16520));
                    arr_10 [i_2] = (((((arr_0 [i_0]) >= (((!(arr_2 [i_3 + 2])))))) ? var_5 : (((max((arr_7 [i_0] [i_0]), (arr_7 [i_0] [i_2])))))));
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((min((arr_6 [i_0] [i_0] [4]), var_11))) ? (arr_6 [i_0] [i_0] [16]) : ((0 ? 18446744073709551615 : 43072))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (((~15) || ((((arr_3 [i_4] [i_4] [i_4]) ? ((max((arr_4 [i_4] [7]), var_11))) : (arr_13 [i_4]))))));
        arr_15 [i_4] = max(1904148660510849631, 40435);
    }
    #pragma endscop
}
