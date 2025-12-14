/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(((((-5331004359765058652 && var_1) < (arr_8 [i_0] [i_2] [i_3 + 2])))), (!0)));
                                var_18 = var_10;
                                var_19 = -var_3;
                            }
                        }
                    }
                }
                arr_16 [i_0 - 1] [i_1] = 3137363604086641331;
                var_20 = ((((((arr_3 [i_1]) ? (arr_14 [7] [i_1] [1] [i_0] [i_1] [16] [i_1]) : (arr_9 [4])))) ? (((arr_10 [i_0 - 2] [i_0 + 1]) % (arr_10 [i_0 - 2] [i_0 - 2]))) : (arr_15 [i_1] [i_1] [4] [i_1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_21 -= (!((max(((0 ? 3263247214 : 0)), var_0))));
                                arr_30 [i_5] [i_6] = (arr_4 [0]);
                            }
                        }
                    }
                }
                var_22 &= (((~var_15) || (((arr_25 [i_6] [i_5] [i_6] [i_6]) >= (arr_1 [i_5])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            {
                arr_37 [i_10] [14] |= (arr_23 [2] [i_11] [i_10] [11]);
                var_23 = arr_34 [i_11] [2];
                var_24 = var_8;
            }
        }
    }
    #pragma endscop
}
