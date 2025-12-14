/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max((var_6 | var_9), var_7)), var_12));
    var_14 = (max(var_2, 18446744073709551615));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_15 *= (((arr_1 [10]) ? (arr_2 [i_1 - 1]) : (arr_1 [1])));
            var_16 = (((18446744073709551615 ? var_7 : 1)) < ((((arr_0 [i_1]) < var_10))));
            arr_5 [i_0] [i_0] [i_0] = 18446744073709551600;
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_17 -= (4294967295 / var_9);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = 1;
                        var_19 = var_1;
                    }
                }
            }
            var_20 = (max(var_20, (max(((var_0 ? (((arr_3 [4] [i_0] [4]) ? var_1 : var_6)) : (var_12 && 1))), (((arr_0 [i_2 - 2]) ? (arr_9 [i_2 + 3] [i_2 - 2] [i_2] [i_2 + 1]) : 65535))))));
            var_21 -= (((min((((arr_6 [5] [i_0]) ? (arr_12 [i_2] [8] [8] [i_0]) : 1247498312668542825)), ((1 ? 1247498312668542805 : var_5)))) & (max(((min((arr_11 [0] [i_2] [i_2] [i_2]), (arr_1 [1])))), -1247498312668542791))));
        }
        arr_15 [i_0] = (((min(4194303, (arr_11 [i_0] [i_0] [i_0] [i_0]))) > ((min((arr_14 [i_0] [i_0] [5] [5] [i_0]), -3782)))));
        var_22 = (max(((((((-3782 + 2147483647) >> (-3782 + 3812))) << ((((1 ? var_10 : 1)) + 725024946))))), (((~var_2) << (18446744073709551615 - 18446744073709551591)))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_23 = (min(var_23, ((((!-1247498312668542781) ? (~65535) : (min((((0 || (arr_19 [i_5] [15] [i_5])))), (((arr_17 [i_5]) ? 6843345550434003863 : 1247498312668542797)))))))));
                    var_24 = (((((33780 ? (arr_18 [10] [i_6] [i_5]) : (arr_18 [i_5] [i_5] [i_5])))) ? (((((1 ? (arr_23 [i_5] [i_6] [i_7]) : var_9))) ? (((arr_17 [i_5]) + 3222591099730538268)) : (arr_17 [i_7]))) : (arr_18 [i_5] [8] [i_7])));
                    arr_24 [i_5] [i_5] [i_5] [i_5] = (((((~((1 ? 18446744073709551615 : 1))))) ? (((((max(224, (arr_17 [i_7])))) || (((1 << (var_8 + 29770))))))) : var_2));
                }
            }
        }
        arr_25 [i_5] = ((((min((arr_19 [i_5] [i_5] [i_5]), (arr_21 [i_5] [i_5] [i_5])))) % (max(-2591018711737369859, 32))));
    }
    var_25 = (955793044 ? 15224152973979013325 : var_8);
    #pragma endscop
}
