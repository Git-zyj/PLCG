/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_6, (min((min(var_3, var_6)), (((var_4 ? var_1 : 1805661418))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 -= ((1 ? (arr_2 [4] [i_1]) : 1302046913));
            arr_6 [i_0] [i_1] [i_1] = var_10;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = var_4;

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_15 &= ((4294967295 ? var_5 : var_8));
                var_16 = ((var_6 ? 55788 : 2134960990));
                var_17 = ((var_8 ? (arr_9 [i_2] [i_3 + 1] [i_2]) : (((12406473528632435831 ? (arr_3 [i_3 + 1] [i_2]) : (arr_11 [i_2] [11] [i_3]))))));
                arr_13 [0] [i_2] [i_2] [i_0] = ((var_9 ? (arr_11 [i_2] [9] [9]) : var_6));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 += (arr_2 [13] [i_2]);

                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    var_19 -= (arr_4 [i_5 + 1] [6]);
                    var_20 = (min(var_20, (((-32196 ? 8 : (arr_18 [4] [i_5 + 1] [i_0] [i_0]))))));

                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_24 [i_0] [1] [i_4] [i_2] [i_6] = ((((arr_2 [i_4] [i_4]) ? -1675771838 : var_5)));
                        arr_25 [i_2] = 17;
                        var_21 *= 1;
                    }
                    var_22 -= ((-879415810 ? ((-879415807 ? -3002726286934508892 : -2582)) : (arr_8 [i_0])));
                }
                var_23 = 1675771838;
                var_24 = ((var_6 ? var_9 : var_7));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_25 -= var_3;
                    var_26 = (((arr_11 [i_2] [i_2] [i_2]) ? 1 : var_9));

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_27 = ((0 ? 1675771859 : (arr_21 [i_0] [i_2] [i_7] [i_2])));
                        arr_30 [i_7] [i_2] = (((((-1721098802 ? var_7 : 5098595666112107955))) ? var_6 : ((var_10 ? 1 : 28703))));
                        var_28 += ((((((arr_5 [1]) ? (arr_23 [i_0] [i_2] [i_4] [i_7] [14]) : (arr_16 [8] [i_0] [i_0] [i_8])))) ? (((3 ? var_7 : var_0))) : 6622127767070332084));
                        var_29 = (((arr_4 [i_8] [i_4]) ? var_11 : (arr_4 [i_2] [i_0])));
                        var_30 = (max(var_30, (arr_9 [i_2] [i_2] [i_0])));
                    }
                }
            }
            var_31 = (arr_23 [i_2] [i_2] [i_2] [12] [i_2]);
        }
        var_32 = (max(var_32, ((((((var_11 ? (arr_21 [0] [0] [0] [i_0]) : 3002726286934508897))) ? -22047 : var_11)))));
    }
    var_33 -= (min(((11 ? -12 : 0)), var_11));
    #pragma endscop
}
