/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = var_10;
        arr_3 [18] |= (arr_0 [1]);
        arr_4 [i_0] = (((((arr_1 [i_0] [i_0]) - var_1)) - (arr_1 [i_0] [i_0])));
        var_19 = 0;
        arr_5 [i_0] = ((var_6 ? (arr_0 [i_0]) : -1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = (((arr_7 [i_1] [2]) ? (var_1 || var_6) : ((var_11 ^ (arr_0 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_19 [0] [0] [i_3 - 2] [i_1] = -1608391199;
                        var_20 = (~var_6);
                        arr_20 [8] [i_4] [i_3] [4] |= (((~var_12) == 1608391213));
                        var_21 &= 0;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_23 [i_5] = (max(4788, (arr_2 [i_5])));
        arr_24 [i_5] = var_17;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                var_22 ^= var_16;
                var_23 = (min((((3323853147 / var_9) ? (arr_27 [18] [18]) : var_8)), (arr_25 [i_6])));
                var_24 ^= 448;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_25 |= var_4;

                            for (int i_10 = 0; i_10 < 20;i_10 += 1)
                            {
                                arr_36 [i_10] [i_6] [i_7] [i_7] [i_6] = var_7;
                                var_26 += ((-(var_2 && 1351565480)));
                            }
                            var_27 = ((((max((2147483647 / 52), (arr_35 [4] [7] [11] [i_6 - 1] [i_9] [i_9] [i_9])))) ? ((max((((var_14 <= (arr_25 [i_8])))), (arr_33 [10] [i_6 + 1] [10] [i_6 + 1] [i_7])))) : (((((arr_32 [i_6] [i_6 + 1] [i_7] [1] [1] [i_7]) ? (arr_28 [i_6] [i_6]) : var_5)) ^ ((((arr_29 [i_7] [4] [i_7]) != var_16)))))));
                            var_28 = (min(var_28, (((~(max((var_3 | 18667), var_8)))))));
                        }
                    }
                }
            }
        }
    }
    var_29 += (!var_0);
    var_30 ^= var_1;
    #pragma endscop
}
