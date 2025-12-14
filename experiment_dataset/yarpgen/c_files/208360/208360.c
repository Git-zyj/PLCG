/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((-2147483647 - 1) ? var_4 : var_2))) ? ((1 ? (-2147483647 - 1) : 1212357163)) : (((250518480 ? 18430 : 16854))))) << (var_2 + 28034)));
    var_12 &= var_10;
    var_13 |= (max(15137826695692326784, ((((3308917378017224831 ? var_1 : var_7))))));
    var_14 = (max((max(var_0, -2693921379830723715)), (~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_15 = (((arr_4 [i_0] [i_2]) && (arr_6 [i_3 + 3] [i_3 - 1] [i_3 + 1])));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_16 += (((arr_2 [i_3]) ? -4185 : 2147483637));
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] [1] = (arr_9 [i_4] [i_3] [i_3 + 1] [i_1] [i_3] [i_1]);
                            arr_13 [i_3] [i_3] [i_2] [i_3] [i_4] = ((0 ? 16646144 : 42));
                        }
                        var_17 -= (arr_4 [i_1] [i_2]);
                        var_18 = (var_2 | var_9);

                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            var_19 = (var_10 ^ 18426);
                            var_20 = (arr_5 [i_0] [i_1] [i_3] [i_3]);
                        }
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            var_21 = 2147483647;
                            arr_20 [i_3] [i_1] [i_1] = 3082610133;
                            var_22 = (~1212357163);
                        }
                    }
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_1] = (arr_19 [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]);
                        arr_25 [i_0] [16] [i_0] [i_0] = ((0 ? 1 : ((~(((-711639313 + 2147483647) << (((-289536565 + 289536574) - 9))))))));
                        var_23 ^= (((max(1, (min(226, 18446744073709551605)))) & (((var_2 ? (arr_2 [i_7 + 1]) : (arr_2 [i_7 + 3]))))));

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            var_24 = (max(var_24, var_7));
                            var_25 = 7;
                        }
                    }
                    var_26 = (min(var_26, (((((((arr_1 [i_1] [i_2]) | 18446744073709551605))) ? (arr_1 [i_0] [i_1]) : 2147483639)))));
                    var_27 = (max(3082610133, 0));
                    var_28 = (((-32764 & 1) & (max(var_3, (~210059120)))));
                }
            }
        }
    }
    #pragma endscop
}
