/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (var_14 & var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 += (4294967295 << 0);
                                var_17 |= min((((-(arr_14 [i_1] [i_0] [i_1] [i_3 + 1] [i_4] [i_3 - 1] [i_1 - 1])))), 18446744073709551615);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, (0 ^ var_10)));
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = (((arr_10 [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1]) != ((-(arr_14 [i_1 - 2] [i_1] [i_1 - 3] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_19 = (min(var_19, ((((((arr_24 [i_7] [i_7] [i_7]) - (((~(arr_8 [i_7] [i_7] [i_7] [i_7])))))) != (16777200 != var_11))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_35 [i_7] [i_8] [i_9] [i_8] [i_11] = (!-1424805337);
                                arr_36 [i_7] [i_7] [i_8] [i_7] [i_7] = 167844566;
                            }
                        }
                    }
                }
                var_20 = (var_13 != var_10);
            }
        }
    }
    #pragma endscop
}
