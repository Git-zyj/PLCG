/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(33, 2715473723991438194));
    var_13 = var_8;
    var_14 = (((var_10 ? var_3 : var_11)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 = ((((min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1])))) ? (var_8 - var_0) : ((~(arr_3 [i_0])))));
                var_16 = (max(var_16, ((((-((max((arr_0 [i_1]), (arr_4 [i_1 + 1] [i_0 - 2]))))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 |= (((arr_5 [i_2]) % (arr_7 [i_2])));
        var_18 = (arr_6 [i_2] [i_2]);
        var_19 = (((((arr_7 [i_2]) + 2147483647)) >> (((arr_6 [i_2] [17]) + 30))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_17 [12] [6] [12] [i_3] [i_4 + 1] [i_5] = (((arr_11 [4] [i_4] [i_3] [i_2]) - (arr_15 [i_4 - 2])));
                        arr_18 [i_2] [15] [1] [i_5] = (~-15828);
                        arr_19 [10] &= (((arr_15 [i_2]) >> ((((arr_11 [i_5 - 1] [i_4] [i_3] [i_2]) || 110)))));
                        var_20 = ((~(arr_15 [i_5 - 1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_21 = var_0;
                    var_22 = (min(var_22, 6));
                    var_23 = 145;
                    arr_25 [i_7] [i_7] [i_6] [i_2] = -110;
                    var_24 = ((!(var_2 - var_5)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_25 = (min(var_25, ((((arr_6 [i_8] [i_8]) % (min(12288, 711408381)))))));
        var_26 = (arr_6 [3] [i_8]);
        var_27 ^= (1072966717 || 104);
    }
    #pragma endscop
}
