/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((!var_6) >> ((((((min(var_9, var_6))) ? var_1 : (((max(-16, var_3)))))) - 711531491)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 += (((3644884864807425074 >= -var_12) % (((((var_11 ? 3273210708 : (arr_4 [i_0] [i_0]))) != 24)))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] = ((~((-(arr_0 [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 = (min(var_18, var_6));
                        var_19 ^= arr_7 [i_0] [i_0];
                    }
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_15 [11] [i_4] |= ((~(arr_6 [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 &= ((+(min((24 * 28), ((max(-16, var_14)))))));
                                var_21 = 2753713269;
                                var_22 &= (arr_2 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_23 = min(var_12, 15);
                                var_24 += var_7;
                                var_25 = (min(var_25, (arr_23 [i_0] [i_0] [i_0])));
                                arr_27 [i_0] [i_1] [i_4] [i_7] [i_8] [i_4] &= var_8;
                                arr_28 [i_0] [i_0] [i_0] [i_4] [i_7] [i_8] [i_8] = -8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
