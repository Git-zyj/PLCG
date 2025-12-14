/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_5 ? 0 : (var_0 / var_8))) >= ((((min(var_3, var_10))) ? var_3 : 219))));
    var_13 = (max(var_13, (((~((((var_2 ? 0 : var_2)) - ((min(var_5, var_6))))))))));
    var_14 -= ((((((((var_3 ? var_7 : var_7))) ? var_8 : (48207 / -20)))) ? var_8 : var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = var_3;
                                var_16 = (-(((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0 - 1] [i_0] [i_3] [i_3]))));
                                var_17 &= (max((max((((arr_0 [i_3]) / (arr_4 [i_4] [i_4] [i_4] [i_0]))), 100)), (arr_5 [i_0] [12] [i_4] [i_2])));
                                arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_4] [i_0] [i_0] &= (max(((var_6 * (((arr_2 [i_4] [i_1]) ? var_4 : var_6)))), (((((min(var_5, (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4])))) ? (min(var_0, var_2)) : 19)))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_0 - 1] [i_0] [i_2] [i_3]) / ((var_8 ? (arr_4 [i_0] [i_0] [i_2] [13]) : (arr_4 [i_0 + 1] [i_0] [i_2] [i_4])))));
                            }
                        }
                    }
                    var_18 ^= 65532;
                    var_19 = (min(var_19, ((((((49248 ? 0 : 93))) || ((min(((var_6 ? (arr_2 [i_2] [i_2]) : (arr_10 [i_2] [i_0 - 1] [i_0] [i_1] [i_2]))), (~var_10)))))))));

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_20 ^= (((((1147774800 ? 1147774802 : 65523))) ? (!-32751) : (((arr_9 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_5]) ? var_9 : (arr_9 [i_0] [i_1] [i_2] [i_5 - 3] [i_1] [i_1])))));
                        var_21 = (max(var_21, (((((~(arr_10 [i_2] [i_0 - 1] [0] [i_0] [i_5 - 1])))) ? ((-((min(16310, 53391))))) : ((-(((arr_1 [i_2]) & var_2))))))));
                        var_22 -= (~var_9);
                        var_23 = (min(var_23, (((~(~149))))));
                    }
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        var_24 = (min(var_24, ((var_8 ? (min((max(var_9, 2638026181)), ((var_2 ? (arr_4 [i_6] [i_6] [i_6] [i_0]) : -1)))) : (7 % -23925)))));
                        var_25 &= ((!(1147774791 / -38)));
                        var_26 = (max(var_26, ((((244 + 1656941114) ? ((((((15 ? 252 : var_8))) ? ((max((arr_16 [5] [i_2] [i_1] [i_0]), -10))) : ((var_3 ? (arr_1 [i_6]) : var_8))))) : (~var_4))))));
                        var_27 = (arr_18 [i_0]);
                        arr_20 [i_6] [i_0] [i_0] [i_0] = (~0);
                    }
                    var_28 = ((~(min((-2147483647 - 1), (((arr_8 [i_0] [i_0]) ? (arr_5 [i_1] [i_1] [9] [i_0 - 1]) : var_9))))));
                }
            }
        }
    }
    var_29 -= ((3 && (((~(7 ^ 17053))))));
    #pragma endscop
}
