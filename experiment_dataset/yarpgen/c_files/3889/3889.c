/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= 18446744073709551615;
        arr_4 [i_0] = (max((((-(arr_2 [i_0])))), var_8));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_14 = (arr_1 [i_1 + 2]);
        var_15 = var_10;

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (arr_8 [i_1] [i_1] [i_1 + 2]);
            arr_10 [i_2] [i_2] = arr_6 [i_1 - 1];
            var_17 = (arr_9 [i_1 + 2]);
        }
        arr_11 [i_1 - 1] = 72;
    }
    var_18 &= ((-((-(max(3247936983, 22924))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                {
                    var_19 = (var_11 ? (max(((min(1, 4097756888))), var_5)) : ((((((((arr_19 [i_5]) > (arr_17 [i_5] [i_3] [i_3])))) > (arr_13 [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_20 = arr_15 [i_3];
                                arr_25 [i_5] [i_4] = -var_1;
                                var_21 *= (((arr_16 [i_5 + 2] [i_5 + 2]) ? 9223372036854775807 : var_8));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_22 -= (-9223372036854775807 - 1);
                                var_23 = max(1, (max(var_12, ((~(arr_28 [i_3] [21] [i_5] [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
