/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_0;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = arr_1 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((~((((arr_4 [i_0]) == (arr_4 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((((max((arr_2 [3] [3]), (arr_1 [i_1] [i_1]))))) * ((96 & (arr_10 [i_0 - 2] [i_0] [i_0] [i_0 + 2]))))))));
                                arr_11 [i_0] = (max((max((arr_3 [i_0 - 1] [i_1]), (arr_3 [i_0 + 3] [5]))), (arr_3 [i_0 - 1] [i_3])));
                            }
                        }
                    }
                    var_20 = (!var_8);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_21 = (min(var_21, (max((arr_16 [i_0 + 2] [1] [1]), (((18446744073709551593 % (arr_19 [i_0] [i_0] [i_5] [i_5] [i_0] [i_7]))))))));
                        var_22 &= (max((arr_10 [i_0] [i_5] [i_0] [i_7]), (((min(18446744073709551609, 111))))));
                        var_23 = (max(var_23, (((((max((max(var_1, (arr_19 [i_0] [1] [i_5] [7] [i_7] [i_7]))), 56))) ? ((-((max((arr_17 [i_7]), var_13))))) : var_8)))));
                    }
                }
            }
        }
        var_24 = (max(var_24, ((((arr_12 [i_0] [i_0] [i_0]) >= (((arr_18 [i_0] [i_0] [3] [i_0 - 1]) * (85 % 2))))))));
    }
    #pragma endscop
}
