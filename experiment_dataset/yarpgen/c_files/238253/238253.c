/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_19 = ((!(arr_0 [i_0 - 2] [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (arr_2 [8] [i_1]);
                    var_20 *= (((-1 % 42605) ? 255 : ((42605 ? -1 : -23868))));
                    var_21 = (max(var_21, 1));
                    arr_9 [i_0 - 1] [3] [i_1] [i_2] = ((((((arr_4 [i_2] [i_0]) ? 28958 : var_5))) < (arr_0 [i_0 - 1] [i_0 + 1])));
                    var_22 ^= ((-(arr_5 [i_0 - 3] [i_0 - 1] [23] [i_2])));
                }
            }
        }
        arr_10 [i_0] = arr_5 [1] [i_0 - 1] [i_0 - 1] [i_0 - 1];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_23 ^= 38866;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                {
                    var_24 = (arr_17 [i_5 - 3] [i_4] [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_25 = (min(var_25, (~var_14)));
                                arr_25 [6] [6] = ((var_8 ? (arr_11 [i_7 - 2] [i_6]) : 2477));
                            }
                        }
                    }
                    arr_26 [i_3] [i_4] [i_5] [i_5 + 1] = 18446744073709551615;
                }
            }
        }
    }
    var_26 = ((((min((!var_9), (min(var_12, 65535))))) || 42593));
    var_27 = 1935256329;
    #pragma endscop
}
