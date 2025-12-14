/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_2, 16717))) ? (((((2147483646 ? var_8 : 16717))) ? -var_10 : var_9)) : 16717));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] |= (arr_6 [i_0] [i_0] [i_1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] = ((16717 >> (16717 == -4531)));
                        var_20 |= (arr_10 [i_3] [i_3]);
                        arr_13 [i_0] = ((~(arr_7 [i_0] [i_1] [i_2] [i_3])));
                        var_21 = ((~(arr_10 [17] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_22 = ((-4531 ? (arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_23 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_2] [i_4]) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_24 = ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_25 = ((((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_4 [i_0] [i_0] [i_0]) : var_1))) ? 3816021209 : var_14));
                        var_26 = ((-1 ? (arr_0 [i_1]) : ((-(arr_15 [i_5] [i_1] [i_0])))));
                        var_27 = (((arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5]) - (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_18 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5] = (arr_7 [i_5] [i_2] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_28 = (max((((arr_2 [7] [i_0] [i_0]) ? -4531 : ((min(11416, (arr_10 [i_0] [i_0])))))), ((-(((arr_16 [i_0]) ? var_6 : var_6))))));
                                var_29 = (--66);
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = ((var_1 ? var_3 : 127));
    #pragma endscop
}
