/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((((((var_6 ? var_4 : var_6))) ? (min(var_3, 0)) : (var_4 >= var_0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = ((!(arr_0 [i_0])));
        var_13 = -22849;
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) % (((arr_1 [i_0]) ? -5789701213688418335 : (arr_0 [i_0])))));
        var_14 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_15 = -5789701213688418335;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_3 + 3] [i_3 + 3] [i_4] = (arr_3 [i_3 + 4]);
                        var_16 = (((((((arr_11 [i_1] [i_2]) == var_4)))) / (arr_5 [i_2])));
                        arr_17 [i_1] [i_1] [i_2] [i_3] [i_4 - 2] = (((arr_15 [i_4 + 3] [i_4 + 4] [i_3 - 1] [i_1]) * (arr_15 [i_4 + 1] [i_3] [i_3 - 1] [i_2])));
                    }
                }
            }
        }
        var_17 = ((~(arr_0 [i_1])));
        arr_18 [i_1] [i_1] = ((27510 <= (arr_10 [i_1] [i_1] [i_1])));
        arr_19 [i_1] [i_1] = ((+((62 ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : var_5))));
    }
    var_18 = (var_1 * var_5);
    #pragma endscop
}
