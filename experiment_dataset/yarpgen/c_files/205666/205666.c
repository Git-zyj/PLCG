/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [19] = (!1);
                    arr_9 [i_1] [i_2] = (min(((18680 ? -105 : -var_10)), ((-var_9 ? (~105) : ((min(105, var_7)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_11 += (min(var_1, -1078778823028928882));
                var_12 = ((((max(87, -26258))) ? var_3 : -111));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_13 = (((~var_7) ? 65535 : (~var_9)));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_14 = -124;
                                arr_30 [10] [10] [i_7] [i_8] [i_8] [i_9] = min((max(26258, 87)), ((min(1, var_2))));
                            }
                        }
                    }
                }
                var_15 = (max(var_7, -var_5));
                arr_31 [i_5] = var_2;
            }
        }
    }
    #pragma endscop
}
