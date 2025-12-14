/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 ^= var_8;
                var_17 = ((+(max(((14605938236102391863 ? (arr_4 [i_0] [11]) : (arr_3 [7] [7]))), ((max(var_9, 1)))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = (min(var_2, (((~(arr_8 [i_0] [i_1] [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (~(max((arr_7 [i_2] [i_2] [i_3 - 1] [3]), (arr_14 [i_2] [i_2] [i_4] [i_4] [i_3 - 1] [i_3] [i_3]))));
                                var_20 = ((~(arr_9 [i_0] [i_1] [i_1] [i_4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] |= (~var_10);
                                arr_22 [i_0] [i_0] = (min((((arr_16 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 1]) ? (arr_16 [i_5 + 1] [i_5 - 4] [i_5 + 1] [i_5 - 1]) : (arr_16 [i_5 - 1] [i_5 + 2] [i_5 - 4] [i_5 + 2]))), (((arr_16 [i_5 + 2] [i_5 - 2] [i_5 - 3] [i_5 + 2]) ? (arr_16 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 1]) : var_7))));
                                var_21 = (arr_10 [i_0] [i_2] [i_2] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = -var_3;
    #pragma endscop
}
