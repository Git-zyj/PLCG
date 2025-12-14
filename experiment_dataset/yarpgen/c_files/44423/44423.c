/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 |= 0;
                                arr_15 [i_0 - 1] [i_1] [i_1] [i_2] [i_0 - 1] [i_3 - 3] [i_3 - 3] = ((((((arr_11 [1] [1] [i_2] [i_3 + 1]) || (arr_9 [i_3] [i_3] [5] [i_3 - 4]))))) >= ((var_0 ? (arr_5 [i_0 - 4]) : 24576)));
                            }
                        }
                    }
                    var_12 -= -1743818469143712995;
                    arr_16 [i_0] [i_1] [i_2] |= (((((((min(var_10, 0))) < ((0 ? 0 : 255))))) & ((0 & (-2147483647 - 1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] = (((+(((arr_3 [i_0 - 2] [i_1] [i_2]) ? (arr_17 [i_0] [i_1] [i_2] [i_1]) : (arr_19 [i_0] [i_1] [i_0] [i_0]))))) << ((((2147483643 ? (133169152 / 29335) : (0 < 2))) - 4500)));
                                var_13 = 1591260203;
                                arr_24 [i_0 + 2] [i_1] [i_2] [i_6 + 1] [i_6 + 1] = (max(1, ((7 ? 5 : 3541162798))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_30 [i_8] = (max(((~(((arr_29 [11] [i_7]) ? 163 : var_0)))), ((max(255, var_7)))));
                var_14 = 6;
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_15 = (min(var_15, var_6));
                                var_16 = (min(var_16, 4186112));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = 1829774765;
    var_18 = 9712;
    #pragma endscop
}
