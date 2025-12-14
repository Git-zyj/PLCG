/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_2, (min(var_7, ((var_16 ? var_1 : 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 68;
        arr_4 [i_0] [i_0] = (-69 / -127);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = 4903328227459400478;
        var_18 = (arr_6 [i_1]);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_19 = -153;
        arr_12 [i_2] = 47868;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_20 = (((((var_2 ? -68 : -19))) ? (arr_0 [i_3]) : 15726));
                            var_21 = ((~(((~-110) ? -68 : (((var_0 + 2147483647) << (((var_7 + 22238) - 13))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_28 [13] [i_7] [i_8] [i_8] [i_3] [i_7] [i_3] = -38075;
                                arr_29 [i_9] [i_9] [1] [i_9] [i_7] [i_9] [6] &= (max(31, ((-(32704 <= var_12)))));
                                arr_30 [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] [i_3] = (arr_22 [i_7] [i_4] [i_4] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
