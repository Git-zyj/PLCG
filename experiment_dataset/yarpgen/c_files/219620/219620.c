/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0 + 1] [i_0] = (((-127 - 1) ? (((arr_2 [i_0] [i_0]) - var_10)) : (-2147483647 - 1)));
                arr_8 [i_0] [i_1] = ((((((arr_1 [i_0 + 1] [i_0]) <= (arr_1 [i_1] [i_0]))))) == ((~(((arr_5 [i_0] [i_1]) & (arr_4 [i_0]))))));
            }
        }
    }
    var_11 |= (max((((((3774236011 ? 10 : var_5))) / 3774235993)), (!-1)));
    var_12 = (max(0, (((-(24868044 == -127))))));

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((max(7, 649560573))))));
                                var_14 = (min(var_14, ((max((((~var_2) << (((~var_5) - 17828)))), ((((arr_13 [i_2]) - (arr_17 [14] [i_5] [i_4] [14])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] = (arr_24 [i_4] [i_3] [i_4]);
                                var_15 = ((+(((arr_26 [i_4 + 1]) - (arr_26 [i_4 + 1])))));
                                var_16 = (max(var_16, (((((((((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]) && (arr_20 [16] [i_3] [16])))) >> (-120 + 132))) - (((((!(arr_24 [14] [i_3] [i_4])))) >> 1)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_30 [i_2] [i_2] = 3774236029;
    }
    #pragma endscop
}
