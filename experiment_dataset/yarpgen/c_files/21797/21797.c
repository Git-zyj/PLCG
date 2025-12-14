/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [2] [i_2] &= (((~(~var_9))));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = var_4;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_24 [i_5] [i_5] [i_5] = (min((-1037353475573150457 % var_10), (max((arr_16 [i_4] [i_4] [i_4 + 1]), ((8234855439251874515 ? 1888249694 : (arr_23 [i_3] [i_4] [i_5] [i_5] [i_5])))))));
                                var_12 += 248;
                            }
                        }
                    }
                    var_13 = (min(var_13, ((max((max((((var_3 * (arr_17 [i_4] [0])))), (min(2406717602, 27)))), (((((max(var_7, 2406717578))) ? (-2147483647 - 1) : 168))))))));
                }
            }
        }
    }
    var_14 = (~var_8);
    var_15 = ((max(132, var_5)));
    #pragma endscop
}
