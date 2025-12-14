/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = 4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 -= 127;
                            var_18 ^= (arr_1 [i_0] [i_0]);
                            var_19 = ((var_0 || (((~(max(2056896134, var_12)))))));
                            var_20 = var_6;
                            arr_10 [i_3] [i_2] [8] [i_1] [i_0] = var_6;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_1 + 1] [i_4] [i_4] = (min(((var_5 ? (arr_1 [i_0] [i_1 + 1]) : var_8)), (arr_1 [i_0] [i_1 + 1])));
                            arr_16 [i_0] [i_5] [i_4 - 1] [i_5] [i_5] [i_5] = -64;
                            arr_17 [6] [i_1] [i_4] [i_5] [i_4] [i_5] = ((0 ? (max(121, (arr_11 [i_5 + 2] [i_1] [i_0]))) : 12));
                            var_21 = ((var_6 ? ((max((arr_8 [16] [7] [i_4] [i_4] [i_1] [i_0]), (arr_12 [i_5 - 1] [i_4 - 2] [i_1 + 1])))) : (arr_7 [i_4])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
