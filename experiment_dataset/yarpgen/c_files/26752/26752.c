/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_8 * (var_12 * -110));
    var_14 = var_8;
    var_15 = max(((-(min(var_4, 2147483647)))), var_0);
    var_16 &= 1167776913;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 &= ((~(min(var_4, -1024782786))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (min(-79, 0));
                                var_19 = (min(var_19, (((-15 ? 110 : 1)))));
                                var_20 = (72 == 43585);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 = ((-((-(arr_16 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_1])))));
                                var_22 ^= (((((9916537931409199852 | (arr_12 [i_0] [i_1] [i_2] [i_5 - 3] [i_6])))) ? (arr_19 [5] [i_1] [i_6] [i_1] [5] [i_6] [10]) : ((min((arr_12 [i_0] [11] [i_5 + 1] [i_5] [i_2]), var_12)))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (min(var_23, (((-((var_5 / ((-835377840 ? var_5 : (arr_4 [i_0]))))))))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] [i_7] = (max(1, ((max(1, 56)))));
        var_24 += (~1597527751);
        var_25 = ((118 ? 0 : 27040));
        var_26 = ((((!(arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])))));
    }
    #pragma endscop
}
