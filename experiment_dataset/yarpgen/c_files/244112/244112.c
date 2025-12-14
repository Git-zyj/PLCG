/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244112
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
                var_15 = 61325;
                var_16 = arr_3 [i_0] [i_0] [i_1];
            }
        }
    }
    var_17 = var_12;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_19 = (max(var_19, ((max(((((arr_5 [6]) & (arr_8 [i_3] [i_3])))), (max((min(7168, (arr_6 [i_2]))), (arr_8 [i_2] [i_3]))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_15 [i_2] [i_5] [i_2] [i_2] [i_2] = (((arr_13 [i_2]) ? var_4 : (((((min((arr_9 [i_2] [i_4] [i_5] [i_2]), (arr_13 [i_2])))) ? (arr_6 [i_3 + 1]) : (arr_9 [i_2] [i_3] [i_3] [i_2]))))));
                                arr_16 [16] [i_2] [i_4] [i_2] = 7895413919908596785;
                            }
                        }
                    }
                }
                arr_17 [i_2] = var_8;
                var_20 |= ((((~(max(250540529, var_2)))) | ((-61 ? 28 : 0))));
                arr_18 [i_2] [i_3] [i_3 - 1] = ((max((arr_13 [i_2]), (arr_9 [i_3 - 3] [i_3 + 1] [i_3] [i_2]))));
            }
        }
    }
    #pragma endscop
}
