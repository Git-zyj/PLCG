/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((0 ? 520093696 : -2056203244545153838))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_3 + 1] [i_2] [i_1] [i_0] = (((((((67108863 ? var_10 : (arr_8 [i_4] [i_3] [i_2] [i_1] [i_0])))) ? ((max(113, (arr_1 [i_0])))) : ((var_2 ^ (arr_9 [i_4] [21] [i_2] [21] [i_0])))))) ? var_5 : var_11);
                                arr_12 [i_0 - 3] [i_1] [8] [i_3 - 3] [i_4] = ((+(max((~var_4), 67108863))));
                            }
                        }
                    }
                    arr_13 [i_0] = var_9;
                    arr_14 [i_2] [i_1 - 1] [i_0 + 1] = ((min(((var_6 ? var_11 : var_4), (~var_1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_2] [i_5] [i_5] [i_0] = (min((~var_12), ((max((arr_2 [i_0 - 2] [i_6]), var_8)))));
                                arr_22 [i_5] [i_5] [i_6] = 14754390553678050920;
                            }
                        }
                    }
                    arr_23 [i_0 - 1] [i_0 - 3] [i_1] [i_2] = (((~var_12) ? (max(67108863, 67108863)) : (((max((arr_5 [i_1 - 2] [i_0 - 2] [i_0 - 3]), var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
