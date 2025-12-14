/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max((min((max(var_14, var_10)), (253 || -116))), ((((max(1, 1)))))));
    var_16 = ((((((max(var_2, 2147483648)) * (227511820 * 57835)))) && (((18446744073709551614 ? var_5 : var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] = 112;
                    var_17 = ((112 && ((max(65509, ((max((arr_6 [i_0] [i_1] [12] [i_2 - 2]), (arr_6 [i_1] [i_1] [16] [i_1])))))))));
                }
            }
        }
    }
    var_18 = (max(var_18, var_2));

    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_19 = (max((arr_5 [i_3 - 1]), ((4533 % (arr_5 [i_3 + 1])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [2] [i_3] = (arr_6 [i_3] [i_4] [1] [i_5]);
                    arr_17 [i_3] [i_3] [i_5] = (arr_13 [i_3] [i_4] [i_5]);
                    var_20 |= (max((max(((max((arr_0 [1] [1]), 118))), (min((arr_14 [i_3] [6] [6]), -1591813457)))), (arr_5 [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
