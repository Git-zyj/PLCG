/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = arr_2 [3];
                    arr_8 [i_0] [11] [i_0] = ((((arr_0 [i_0]) * (arr_0 [i_0]))) * ((var_9 ? ((-16384 ? -29690 : var_2)) : ((30848 ? -6263 : (arr_4 [i_0] [i_1] [i_2]))))));
                    arr_9 [i_0] [i_2] [i_2] = (arr_1 [i_0 + 1] [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_18 [i_4] = ((~(((arr_13 [i_4] [i_3]) ? (arr_13 [19] [i_5]) : (arr_16 [i_3] [i_3] [i_3] [i_3])))));
                    arr_19 [i_3] [i_3] [17] [i_5] = (((arr_10 [i_3] [i_4]) ? (arr_17 [14] [14] [i_4] [14]) : (-4194300 ^ -var_5)));
                    var_15 = (min(var_15, ((((((arr_12 [i_5]) ? (arr_17 [i_3] [i_4] [i_5] [i_5]) : (arr_17 [i_5] [i_4] [1] [i_3])))) ? (((arr_17 [i_5] [i_4] [i_3] [i_3]) ? (arr_17 [i_3] [i_4] [4] [17]) : (arr_12 [i_3]))) : ((((arr_12 [i_5]) ? -16372 : (arr_12 [i_3]))))))));
                    var_16 += ((-((+(((arr_11 [i_3]) & (arr_14 [4])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_25 [i_3] [i_4] [i_5] [i_4] [i_7] [i_3] = ((32512 << (30840 - 30825)));
                                var_17 = ((((((arr_17 [i_3] [i_4] [i_5] [i_6 + 1]) ? var_10 : 172))) ? ((((((arr_11 [5]) ? (arr_21 [i_5]) : 30849))) ? ((((arr_15 [i_3] [i_4] [i_5]) ? 130023424 : (arr_20 [1] [i_4] [11] [1] [i_7 - 3])))) : (arr_21 [i_6 - 1]))) : (max(-15360, var_7))));
                                var_18 *= (min((min((1 % 1), -32485)), (arr_16 [i_7] [i_7 - 4] [12] [i_7])));
                                var_19 = (!-6260);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
