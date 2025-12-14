/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = -var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = ((((((7471326205935182474 ^ var_0) / var_2))) ? ((min((arr_7 [i_0] [i_1] [i_2]), var_0))) : (((arr_0 [i_0]) ? ((max(var_5, var_9))) : 56))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((4294967295 ? (arr_1 [i_1]) : -1579691048))) ? (((!1579691065) ? ((0 ? var_5 : 1699365162)) : (9120623320213123168 < var_5))) : (((((var_3 ? var_3 : var_1)) != var_4)))));
                        var_13 = max((((((((arr_9 [i_0] [i_1] [i_2] [i_3]) ? (arr_8 [i_0] [i_1] [i_2] [i_2] [i_3]) : 3630922369))) ? (!0) : (1579691065 ^ 119)))), ((var_4 ? var_6 : var_2)));
                        arr_11 [i_0] [i_0] = var_6;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_14 &= (((((!(9326120753496428451 * var_6)))) != ((((min(934217835, var_1)) <= ((max(var_2, var_0))))))));
                        var_15 = ((+((-6576 ? (arr_3 [i_1] [i_2]) : (arr_3 [i_0] [i_1])))));
                        var_16 ^= ((-17861 ? var_5 : (var_5 != -17)));
                        var_17 = ((~((((arr_4 [i_0] [i_2] [i_4]) != var_1)))));
                        arr_15 [i_0] [i_1] [i_2] = (((var_0 + 2147483647) >> (((max((arr_7 [i_0] [i_0] [i_0]), -1920)) + 1942))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 = -1699365166;
                                var_19 = (((((((var_2 ? var_0 : var_6)) * var_9))) ? 17860 : 558999821));
                                var_20 &= ((((var_3 > (((!(arr_16 [i_6 - 1] [i_5] [i_1] [i_0])))))) ? (((((max(-537502113, var_9))) ? ((-10 ? (arr_9 [i_0] [i_1] [i_5] [i_6 - 2]) : -6)) : (!var_8)))) : (((var_7 != var_8) ? -10 : var_4))));
                                var_21 = (min(var_21, (!2629763925)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
