/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 15));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (((((var_10 ? (arr_2 [i_2]) : (arr_5 [i_2] [i_2 - 1] [i_2])))) ? var_4 : 9));
                    var_21 = -var_14;
                }
            }
        }
        var_22 = (((!0) ? var_14 : (((min(9, 6176419176136183085))))));
        var_23 = (((((var_17 ? var_11 : ((max(var_6, var_2)))))) ? var_2 : (((arr_0 [i_0 + 4] [i_0]) ? (((arr_5 [1] [i_0] [i_0 + 4]) ? 6176419176136183085 : 240)) : (((var_5 ? 1 : var_1)))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_24 ^= (arr_4 [i_4]);
                        arr_16 [i_3] [i_3] [i_3] [i_5] = ((((max(var_18, (arr_3 [i_0 + 3])))) ? (var_5 < 608493676) : (((arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_0 + 3]) ? (arr_11 [i_3 + 2] [i_3] [i_4] [i_0 - 1]) : (arr_11 [i_3 + 2] [i_3] [i_4] [i_0 + 4])))));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (min(((((arr_15 [1] [1] [i_6] [i_6 + 4] [i_6] [i_6]) ? (arr_15 [i_6] [i_6 - 1] [i_6] [i_6 + 4] [i_6] [i_6 - 1]) : 15))), -2860126457141138679));
        var_25 = ((((((arr_14 [i_6]) ? 240 : (arr_0 [i_6 + 4] [i_6 + 4])))) ? var_3 : (~var_10)));
    }
    var_26 = ((!(((((var_17 ? var_10 : var_4)) * ((min(var_4, 156))))))));
    var_27 = (min(var_27, 88));
    #pragma endscop
}
