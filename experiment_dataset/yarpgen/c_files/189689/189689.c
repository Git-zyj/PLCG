/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 += (min((((arr_1 [i_0] [4]) << var_2)), (min(var_10, ((var_6 ? (arr_0 [i_0]) : var_5))))));
        var_14 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_7 [0] [i_1] &= ((((((arr_1 [i_1] [i_2]) % (arr_3 [i_1])))) || (arr_2 [i_1] [i_1])));
            var_15 &= (arr_6 [i_1] [i_1]);
        }
        arr_8 [i_1] [i_1] = (((((((9223372036854775807 ? (arr_1 [i_1] [0]) : (arr_2 [i_1] [i_1]))) >> (((max((arr_0 [i_1]), var_0)) - 4294947975))))) ? ((114 ? 47676 : (arr_3 [i_1]))) : ((255 ? ((-(arr_2 [8] [i_1]))) : (17859 / var_10)))));
    }
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_4] [i_5] [14] = (min(((((((arr_10 [i_4]) ? var_5 : 4294967295))) - (9831548748798976281 - 205))), ((((arr_12 [10] [i_4]) ? (arr_14 [i_5] [i_5 + 1] [i_5]) : (var_5 / var_9))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 -= (var_8 % 68);
                                arr_20 [12] [i_4] [1] [i_4] [11] [i_5] [i_4] = (arr_13 [i_5]);
                                var_18 = (max(var_18, ((min((max(((3253533176 ? (arr_19 [i_7] [i_6] [i_5] [i_3] [i_3]) : 153)), (arr_18 [i_4] [i_4] [i_4] [i_4] [i_3]))), 65535)))));
                                var_19 += (arr_1 [i_4 - 1] [i_5 + 3]);
                            }
                        }
                    }
                    arr_21 [i_5] [i_4] [i_4] [i_5] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
