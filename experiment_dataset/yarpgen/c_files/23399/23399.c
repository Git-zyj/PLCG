/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [i_1] [i_2] [i_0 - 2] = (((((arr_3 [i_0 - 4] [9]) && ((max(1028185338270216416, var_10))))) ? (((arr_4 [i_0 - 4]) ? ((min(23835, 61803))) : (((arr_1 [i_0 - 4] [i_1]) ? 27193 : (arr_5 [i_0]))))) : ((min((arr_2 [i_0 - 1] [i_0]), (arr_2 [i_0 - 2] [i_0]))))));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_12 = (((arr_6 [i_0] [4] [i_2] [8]) ? (((((0 ? 0 : (arr_2 [i_0] [i_2])))) ? 11204883658214209587 : (arr_1 [i_0] [i_0]))) : (((((arr_6 [i_3 - 1] [i_0] [i_2] [i_3]) && ((var_8 || (arr_4 [1])))))))));
                        var_13 = (max((((arr_8 [i_3 + 3] [i_3 - 1] [i_0 - 3]) ? (arr_8 [i_3 + 3] [i_3 + 3] [i_0 - 4]) : 1)), ((~(arr_8 [i_3 + 2] [i_3 + 2] [i_0 - 3])))));
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_14 = (~var_2);
                        var_15 = (arr_10 [9] [9] [9] [0]);
                        var_16 = (arr_0 [i_0] [i_1]);
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_17 = ((~((min((!1), (1 && var_8))))));
                        arr_19 [i_0] [13] [i_5] [i_5] = (arr_12 [i_0] [i_1] [i_2] [1]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_18 = arr_10 [i_0 + 2] [i_0 + 2] [0] [i_6];

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_19 = (max((arr_4 [i_0]), (arr_2 [2] [i_0 + 1])));
                            var_20 = ((~(max(3145216488, (max((arr_23 [i_0] [1] [11] [i_6] [i_7]), (arr_17 [i_0] [i_2] [i_2] [i_1])))))));
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_21 = ((min(1, (arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_6]))));
                            var_22 = (min(var_22, ((((15516 + var_10) && ((((((1 ? 18177124 : 980546413))) ? var_1 : (((3188757228010942452 ? 4674 : (arr_20 [i_0] [i_0 + 2] [9] [i_0 + 2] [i_8] [i_6]))))))))))));
                            var_23 += 1;
                            var_24 = ((~(arr_16 [i_0 + 1] [i_1] [i_2] [i_6] [i_6])));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_25 = (min(var_25, (~1)));
                            arr_32 [i_0] [i_1] [i_1] [i_0] [i_9] [i_9] = ((((min((arr_3 [1] [i_2]), (((var_10 ? (arr_26 [i_9] [i_6] [2] [i_0 - 2]) : (arr_28 [i_0 + 2] [i_1] [i_2] [i_2] [i_2] [i_6] [i_9]))))))) && 10686667072843425101));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_26 |= ((var_1 + ((62068 ? (max(18180329746881878115, var_11)) : var_2))));
                            var_27 = (min(var_27, 4087747732));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_28 = (min(var_28, ((((((((min(16514522056994369374, var_9))) ? (!549755813887) : (((arr_4 [10]) ? var_8 : 1))))) && ((min((((0 ? 1 : 1))), var_4))))))));
                                var_29 = (max(799211103, 15533121430025459452));
                                arr_41 [i_0] [i_1] [i_0] [i_1] [i_12] [i_1] [i_0 + 1] = (((((15257986845698609163 ? 1 : 4066))) - 1932222016715182264));
                            }
                        }
                    }
                }
            }
        }
        var_30 += (min((arr_14 [i_0 + 2] [i_0 + 2] [i_0] [i_0]), var_11));
    }
    var_31 |= var_1;
    #pragma endscop
}
