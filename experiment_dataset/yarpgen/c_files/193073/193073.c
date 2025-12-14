/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 ^= var_12;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_19 = (arr_6 [i_3] [3]);
                        var_20 = (((-2147483647 - 1) ? (((-2147483647 - 1) ? (-2147483647 - 1) : 1067072425890888077)) : var_10));
                    }
                }
            }
        }
        var_21 = (!17379671647818663539);
        arr_14 [i_0] [i_0] = (max((((((max((arr_3 [i_0] [i_0]), (arr_13 [i_0] [i_0])))) && (((-(arr_10 [i_0]))))))), ((max(8332145439606862324, 88)))));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            {
                arr_19 [i_5] = ((-(arr_17 [i_5] [i_5] [i_4 + 1])));
                arr_20 [i_4] [i_4] |= (!122);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            {
                arr_27 [i_6] = (arr_24 [i_6] [i_6] [i_6]);
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_34 [i_9] [5] [5] [i_8] [i_7] [i_6] = 32664;
                            var_22 = (min(var_22, ((((min(((-(arr_24 [i_9] [1] [i_6]))), -32664)) <= var_10)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
