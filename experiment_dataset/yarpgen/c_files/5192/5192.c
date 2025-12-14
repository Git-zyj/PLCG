/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) & (0 == -100)));
        arr_4 [i_0] = (-60 > var_8);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] &= 0;
        var_10 ^= (arr_6 [i_1]);
        arr_8 [i_1] = (((((max((arr_6 [i_1]), var_2)) ^ var_0)) << ((max((arr_2 [i_1]), (arr_2 [i_1]))))));
        arr_9 [i_1] = var_3;
        arr_10 [17] = (arr_6 [i_1]);
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_11 ^= 1;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_12 = (max(30, 36794));
                            var_13 = (0 != 30);
                        }
                    }
                }
                arr_20 [i_2] [i_2] [i_2] = (max(((((((arr_14 [i_2]) & 1)) < ((max((arr_12 [i_2]), (arr_19 [i_2]))))))), (max((arr_11 [i_2 + 4]), (arr_0 [i_2 + 4])))));
                arr_21 [1] [i_3] [1] = (arr_1 [i_2]);
                var_14 += var_1;
            }
        }
    }
    var_15 = (min(var_15, (var_3 * var_3)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 18;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_7] [i_7 - 2] = (arr_12 [i_7 + 1]);
                var_16 = (arr_17 [i_6] [i_7] [i_7] [i_7]);
            }
        }
    }
    #pragma endscop
}
