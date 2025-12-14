/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = ((((((741341760 >> (((-127 - 1) + 155))))) ? var_4 : 63268)));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [0] [i_3] [i_3] [i_0] = 1084845857;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_11 = 572154716;
                            var_12 = (!2267);
                            arr_16 [i_3] [13] [i_2] [8] [i_4] = 510730864;
                            var_13 = -17497852748027440142;
                            arr_17 [13] [i_3] [i_3] [i_3] [i_4] = (((arr_14 [i_3] [i_1] [i_2] [i_3] [i_4]) ? 2270 : (arr_8 [i_3 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_14 = ((2267 ? (arr_14 [i_0] [i_5] [i_5] [i_3] [i_3]) : (63258 && var_0)));
                            var_15 = var_1;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_16 = -1;
                            arr_24 [i_0] [i_3] [16] [i_2] [i_3] [i_0] = (((arr_15 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]) ? (((arr_20 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_0]) ? (arr_13 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) : 245)) : (((arr_13 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3]) - (arr_20 [i_3 - 1] [i_3 - 1] [i_3 + 1] [15])))));
                            arr_25 [i_3] [9] [i_2] = var_7;
                        }
                    }
                    arr_26 [9] [11] [9] = 2271;
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
