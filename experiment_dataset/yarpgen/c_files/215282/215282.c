/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [8] [i_2] = ((4294967271 ? 2147483647 : (max(-1, (min(65535, -8836756586119156838))))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = (arr_1 [i_0]);
                    var_19 = (arr_7 [i_2 - 1]);
                }
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] = (55916 & 0);
                                var_20 = 2147483636;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (-2147483637 % 3);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                arr_23 [i_7] [i_7] [i_6] = (min(232, ((1 ? 134217727 : 2147483647))));
                var_22 = (583952206 % 1640151855);
                var_23 = (15 & 28);
                var_24 = (511 & 2147483647);
                arr_24 [i_7] = max((min(0, 3145728)), 255);
            }
        }
    }
    #pragma endscop
}
