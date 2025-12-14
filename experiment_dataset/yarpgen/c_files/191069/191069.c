/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 ^= (max(((var_7 < (arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1]))), (((arr_2 [i_2 + 3] [i_2 + 2] [i_2 - 1]) == (arr_1 [i_1])))));
                    var_17 = ((((!((((arr_0 [i_1] [i_1]) + (arr_6 [i_0] [13] [i_0])))))) && 0));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_0] [i_3] [i_3] [i_3] = ((1 ? (((((arr_7 [i_3]) ? 531403817127301591 : var_3)))) : ((((arr_5 [13] [i_4 + 4] [i_4 + 3] [i_4 + 4]) != (arr_5 [i_0] [i_4 - 2] [i_0] [i_4 - 2]))))));
                    var_18 += (max(((~(arr_9 [i_0] [i_4 + 2] [i_4 + 4]))), (arr_9 [i_4 + 4] [11] [i_4 - 1])));
                    arr_14 [i_3] = arr_12 [i_0] [i_0] [i_0] [i_0];
                }
            }
        }
    }
    var_19 &= ((-849345348560791772 ? var_9 : var_0));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                var_20 = ((((((arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1]) ? 33433 : ((max(var_13, (arr_20 [i_5]))))))) && -427818911));
                arr_21 [i_5] [i_5] [i_6 - 1] = 1096506770;
                arr_22 [i_5] [i_5] = (((((((var_2 ? (arr_20 [i_6]) : var_7))) ? ((var_8 ? var_15 : var_0)) : var_14)) * (arr_19 [i_5] [20] [i_6 + 2])));
                var_21 -= 53404;
                arr_23 [i_5] [i_6 - 1] [i_6] = 12140;
            }
        }
    }
    #pragma endscop
}
