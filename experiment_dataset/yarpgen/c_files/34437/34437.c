/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_21 = (+-5);
                                var_22 ^= 451995328;
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_1] = 24576;
                                arr_14 [12] [i_1] [12] [12] [i_1] [12] = ((249 ? (arr_11 [i_0] [14] [i_0] [i_0]) : (arr_0 [i_3] [i_3])));
                            }
                            arr_15 [i_3] [i_2] [i_1] [i_1 - 2] [i_0] = ((((arr_7 [i_0] [i_1 - 3] [i_1] [i_3 - 1]) ? 2147483641 : (arr_7 [i_1] [i_1 - 3] [i_1] [i_2]))));
                            arr_16 [i_1] [6] [1] = ((8 * (arr_4 [i_1] [i_2] [i_2])));
                        }
                    }
                }
                var_23 = ((((!((min(4294705152, 1)))))));
            }
        }
    }
    #pragma endscop
}
