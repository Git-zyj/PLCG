/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 = 0;
        var_12 = (((((-31530 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 4])))) ? (((-2147483647 - 1) ? 2020504612 : 32756)) : ((min((arr_2 [i_0 + 4]), ((1 > (arr_0 [i_0 - 1] [i_0]))))))));
    }

    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_13 -= ((-32750 ? ((max(-32764, 32767))) : (-32750 + 32754)));
        var_14 += (min((((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : (arr_4 [8] [i_1 + 1]))), 32767));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_15 = -32761;

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_16 = -1142335236241895260;
            var_17 = (min(var_17, (((((8123063596540182448 ? 4 : (arr_0 [i_2] [i_2 - 1]))) << (((-24973 % var_10) + 51)))))));
            var_18 -= (arr_8 [7] [i_2] [i_3 + 2]);
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_19 = ((0 ? (arr_6 [i_2 + 1]) : 24972));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_20 = (max(var_20, (((2147483647 ? 33554416 : (arr_15 [i_2] [i_6 + 1] [i_6 + 2] [i_6 - 1]))))));
                        var_21 = 32743;
                        var_22 &= ((1 ? 1 : 65530));
                        var_23 = 524288;
                        var_24 = 8275;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_25 = (((arr_22 [i_2] [i_2 - 2] [i_2 + 1] [i_8 + 1] [i_8]) ? (arr_25 [i_2 + 1] [i_2 + 1] [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) : 32741));
                        arr_27 [i_2] [i_2] [0] [i_2 - 1] [i_9] = (arr_11 [i_2 - 2] [i_2] [8] [i_2]);
                        var_26 = (max(var_26, (24986 || -32737)));
                    }
                    var_27 = ((1 ? 34420494 : 21523));
                    var_28 = (arr_19 [i_2] [4]);
                    arr_28 [i_2] [i_9] [8] [3] = var_0;
                }
                var_29 ^= 24986;
                var_30 = arr_2 [i_8 + 1];
            }
            var_31 = (((((-23 ? -6533 : -1))) ? (((arr_4 [i_7] [i_7]) ? 1 : var_8)) : (arr_19 [5] [i_2 - 1])));
            var_32 = ((-(((arr_26 [i_2]) ? -1 : 16384))));
            var_33 = (arr_11 [i_7] [i_7] [i_7] [i_7]);
            arr_29 [i_2] [9] = (((arr_4 [i_7] [i_7]) ? (arr_8 [i_2] [i_2 + 1] [i_2 - 2]) : ((830035098851531986 ? -32761 : 1))));
        }
        var_34 = var_9;
        arr_30 [i_2] = ((-(arr_7 [i_2] [i_2] [i_2 + 1])));
    }
    #pragma endscop
}
