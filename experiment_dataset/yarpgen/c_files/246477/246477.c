/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 |= 3256962223136474235;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 - 3] [i_1] [i_2] [i_0 - 3] [i_0] = (((((60824 >= 15189781850573077381) ? (arr_8 [i_0]) : ((29124 % (arr_7 [i_2] [i_2]))))) != (max((arr_8 [i_0]), (((arr_10 [i_0] [i_3]) ? (arr_9 [i_0 - 3] [i_1] [i_2] [i_0 - 3] [i_3]) : var_6))))));
                            arr_14 [i_0] [i_1] = (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3]) & (arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 3]))) ^ (((arr_2 [i_0]) & (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))));
                            arr_15 [i_0] = (arr_6 [i_0] [i_1] [i_0] [i_0]);
                            var_20 = 15189781850573077380;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_20 [12] [i_1] [i_4] [i_0] [i_5] = (max(15189781850573077381, -55));
                            var_21 = 15189781850573077381;
                            var_22 = (max(var_22, 36411));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_13;
    var_24 = var_8;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                arr_27 [i_6] = (min(((2338743954793156621 * (arr_25 [i_7] [i_7]))), (arr_25 [i_6] [i_7])));
                arr_28 [i_6] |= (arr_21 [i_6]);
                arr_29 [12] [i_7] = -2565051805836920151;
            }
        }
    }
    #pragma endscop
}
