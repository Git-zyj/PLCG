/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 &= arr_0 [i_0];
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? 62337 : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (max((max(((30815 << (var_3 - 53451))), ((27779 ? var_5 : (arr_1 [i_1] [i_1]))))), ((max(var_2, (arr_0 [i_1]))))));
        var_13 ^= (max(var_5, ((~(arr_4 [i_1])))));
        var_14 += ((var_4 > (var_3 | 496)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_15 |= arr_7 [i_2];
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_16 = (max(var_16, ((((arr_19 [i_3] [i_3]) <= (arr_8 [i_4] [i_4] [i_4]))))));
                        var_17 ^= ((var_4 % (arr_15 [i_2] [i_3] [i_5])));
                        var_18 &= ((var_10 ? var_9 : var_0));
                        var_19 = (arr_10 [i_2]);
                    }
                }
            }
        }
        var_20 += ((~(arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
        var_21 = (((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_17 [11] [i_2] [i_2] [i_2] [i_2]) : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
        var_22 = (8634 - 65524);
    }
    #pragma endscop
}
