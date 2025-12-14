/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_5));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((var_13 > (min((max(-3505331386298592831, (arr_1 [3] [i_0]))), ((max(163, (arr_1 [i_0] [i_0]))))))));
        var_19 = (min((((!14440) ? var_11 : var_15)), ((((arr_0 [i_0] [i_0]) ? ((3505331386298592832 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : ((~(arr_0 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            {
                var_20 |= ((((arr_7 [i_2 + 4] [i_2 - 2] [i_2 + 3]) - ((var_16 ? (arr_3 [i_2]) : -3505331386298592831)))));
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((arr_9 [i_2 - 4] [i_3 + 1]) > (arr_8 [i_2 - 1]))) ? (min(((32755 ? (arr_3 [8]) : (arr_7 [i_1] [i_3] [8]))), (!664))) : (((arr_9 [i_1] [i_1]) ? (arr_10 [2] [i_2]) : (((!(arr_15 [i_5] [i_4] [i_3 + 1] [i_3] [4] [i_2 + 1] [16])))))))))));
                                var_22 = ((((min((arr_8 [14]), (((arr_6 [i_1] [16]) << (((arr_4 [i_5]) - 20189))))))) ? (arr_7 [i_1] [i_3 - 1] [i_2 - 3]) : ((3505331386298592832 & (((arr_8 [i_1]) ? 2 : var_11))))));
                                var_23 = var_14;
                                arr_16 [i_1] [i_4] = var_16;
                            }
                        }
                    }
                }
                arr_17 [i_1] = (max(((+(((arr_8 [i_1]) ? (arr_14 [i_1] [i_1] [i_2] [i_1] [i_2]) : -3505331386298592829)))), var_14));
            }
        }
    }
    var_24 = (min(var_10, ((max(var_2, 8523)))));
    #pragma endscop
}
