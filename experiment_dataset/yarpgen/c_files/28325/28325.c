/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_1 [i_0 - 1]) ? (((125 || (arr_0 [13] [2])))) : ((153 & (-32767 - 1))))) <= var_0));
                var_10 = ((-(-1608411571 / -1608411570)));
                arr_6 [i_1] = ((0 ? -1608411568 : 1608411567));
                var_11 -= (((-2147483647 - 1) & (((arr_3 [12]) + 1608411570))));
                arr_7 [8] [i_1] = (max((!var_7), (((~(arr_3 [i_1]))))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        var_12 -= (arr_2 [12] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 6;i_4 += 1)
            {
                {
                    var_13 = var_2;
                    arr_15 [i_2] [i_4] = (((((((var_5 ? (arr_12 [i_2]) : 2429261903416449875))) ? (var_8 > var_9) : (arr_8 [i_3] [i_4]))) * ((~(arr_13 [i_2] [i_2])))));
                    var_14 = ((max((arr_4 [i_2 - 2] [i_2 - 2] [i_4 + 2]), (arr_2 [i_2] [i_4 + 2]))));
                    var_15 = ((((arr_4 [i_2 - 1] [i_2 - 1] [i_4 + 1]) > (arr_4 [i_2] [i_2 + 1] [i_4 - 1]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_1 [i_2 - 3])));
                    var_17 = (((144 - var_4) ? var_2 : var_2));
                    arr_20 [i_2] [2] [i_6] = var_1;
                }
            }
        }

        for (int i_7 = 4; i_7 < 8;i_7 += 1)
        {
            var_18 = ((!((!((min(0, 65531)))))));
            var_19 = (((arr_1 [i_2 + 1]) > ((~(~var_7)))));
            var_20 = (min(var_20, 1608411570));
            var_21 = (-(((!((min((arr_8 [i_2] [i_7]), (arr_16 [i_2]))))))));
        }
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        var_22 = ((111 & ((((arr_25 [i_8]) > 1608411552)))));
        var_23 = (arr_1 [i_8]);
        arr_29 [i_8] = ((((((~(arr_1 [i_8]))))) ? -var_7 : (arr_2 [i_8] [i_8 + 2])));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_24 -= ((var_4 ? (var_4 <= var_6) : (((var_2 >= var_6) ? (var_2 != var_1) : ((((arr_2 [14] [0]) > 1608411567)))))));
        var_25 = (min(var_25, (((((var_6 ? -126482805 : (arr_30 [i_9]))) >> (((!(var_2 % var_2)))))))));
    }
    var_26 = (min(var_26, (var_0 % var_3)));
    var_27 = var_5;
    #pragma endscop
}
