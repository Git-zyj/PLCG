/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 ^= (((~(max(3325924818, (arr_2 [i_1] [i_1]))))));
                var_12 *= -1;
                arr_4 [i_0] [i_0] [i_0] = ((+(((arr_1 [i_0]) ? (arr_0 [i_1]) : (arr_1 [i_0])))));
                arr_5 [13] [i_1] [13] = (min(var_7, (((((min(1, var_5)))) * (arr_2 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_13 *= ((!(((4294967292 ? -1847645723 : 49892)))));
                    var_14 ^= var_9;
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_15 -= (max(1406773972, 1));
                                arr_22 [i_2] [i_2] [i_5] [i_2] [i_3] = var_7;
                            }
                        }
                    }
                }
                var_16 = (max(var_16, var_0));
                arr_23 [i_3] = (((((arr_18 [i_3] [i_3] [i_3] [i_2 - 1]) || (arr_18 [i_3] [i_3] [i_3] [15]))) ? var_1 : (((-229644547 * (((!(arr_12 [i_3])))))))));
            }
        }
    }
    #pragma endscop
}
