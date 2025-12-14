/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 &= max(3639268216, 0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 |= 655699079;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 += (((((arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4 + 1]) ? (655699079 / var_0) : -3605739219)) | (max(0, 1))));
                                var_18 -= (689228077 * 1);
                            }
                        }
                    }
                    arr_12 [i_2] [15] [i_0] [i_0] = (3639268216 / 188397240);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_19 = (1886332063 & -6179708143643952704);
        arr_16 [i_5] = (1 / 4294967295);
        arr_17 [i_5] = ((~(arr_15 [i_5] [i_5])));
        var_20 |= (max((max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_5]))), (max((arr_14 [i_5] [i_5]), 1))));
    }
    #pragma endscop
}
