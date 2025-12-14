/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((var_8 <= var_2) == (min(1376027679569617295, 32767)))))));
    var_16 = 2147483638;
    var_17 ^= (((106 ? 108 : 1)));
    var_18 = ((((((var_9 >= var_12) ? 0 : ((max(var_9, 123)))))) ? var_7 : var_3));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((max(16891297801514252478, 73)) - ((max(73, ((~(arr_2 [2]))))))));
        var_19 -= 1;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, ((((min((arr_11 [i_3 + 1] [i_1 + 1] [16] [i_3 - 1]), (arr_7 [i_0 + 1] [i_0 + 1] [i_3 - 1])))) ? (((-109 ? (arr_12 [i_0 + 2] [i_1] [i_2 + 1] [17]) : (arr_12 [i_0 + 2] [i_0 + 2] [16] [15])))) : (((113 ^ 66) ? (!7598) : (arr_10 [i_3 - 1] [i_3] [i_3])))))));
                        var_21 ^= -114;
                        arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_2 - 2] [i_3 + 1] = ((max(127, (max((arr_7 [i_3] [i_1 - 2] [i_0 - 1]), var_8)))));
                    }
                }
            }
        }
        var_22 *= (18446744073709551602 | 123);
    }
    #pragma endscop
}
