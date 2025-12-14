/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(((((arr_3 [1] [i_1] [5]) && (arr_1 [i_0 + 2] [i_1])))), (min((arr_0 [i_0 - 1] [i_0 + 1]), 49633))));
                var_13 = (max(var_13, (((((min(var_5, 8570515775849105633))) ? ((-(arr_2 [i_0 + 2] [i_0 + 2] [12]))) : 42302)))));
                var_14 = ((((max((0 / 7231785118808110477), (~8570515775849105633)))) ? 0 : ((-8570515775849105633 ? ((var_3 ? -15593 : 13241)) : 1))));
                var_15 &= (max(15593, -var_3));
            }
        }
    }
    var_16 = var_10;
    var_17 = ((((min(108, -19209))) ? var_6 : var_10));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_7 [i_2] = var_4;
        var_18 = (max(var_18, ((((((min((arr_1 [i_2] [i_2]), 4294967295))) ? (((min(var_5, 177)))) : (((arr_4 [i_2]) ? -102 : 3462290551))))))));
        var_19 = ((((~((var_11 ? 8540713318708064922 : var_6)))) & 0));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_20 = var_7;
                            arr_20 [i_4 - 1] [i_4 - 1] [i_5] [i_4] [i_7] = 8540713318708064922;
                        }
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            var_21 = min((!var_5), ((~(max(var_4, -8570515775849105634)))));
                            var_22 = ((var_7 ? var_11 : (184 && var_8)));
                        }
                        var_23 = ((((arr_14 [i_4 - 1]) ? (arr_14 [i_4 + 1]) : (arr_23 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_6]))) <= (((arr_19 [i_4] [i_4] [i_5]) ? (min(2608772799, var_4)) : (((~(arr_3 [i_3] [i_3] [i_5])))))));
                    }
                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        arr_26 [10] [i_4] [i_9 + 3] [2] = (((~14300) == ((min((arr_3 [i_3] [i_4 - 1] [i_5]), (arr_3 [i_3] [i_4 - 1] [i_5]))))));
                        arr_27 [1] [i_4] [2] = 1686194496;
                    }
                    var_24 += 6684137443087294719;
                }
            }
        }
        arr_28 [i_3] = (max((((1 ? (((arr_14 [i_3]) ? var_1 : var_10)) : var_6))), 13685302529695854086));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    {
                        var_25 = (min((((!(arr_8 [i_10 + 1])))), ((((min(108, (arr_21 [i_3] [i_3] [i_11])))) ? ((1 ? 1065615531 : -15593)) : (arr_22 [i_3])))));
                        var_26 = (((((~((min(32747, -85)))))) != ((-8540713318708064923 ? (min(var_6, var_11)) : (~25261)))));
                        arr_38 [i_12] [i_10] [i_12] [i_12] = ((((min((arr_2 [i_11] [i_10 - 1] [i_12 - 1]), (arr_2 [i_3] [i_10 + 1] [i_11])))) ? (max((arr_2 [0] [0] [i_3]), (arr_2 [i_3] [13] [i_11]))) : ((var_11 * (arr_2 [i_3] [i_10 + 1] [i_11])))));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_27 = (arr_25 [1] [i_13] [i_13] [i_13]);
        var_28 -= ((~(max((arr_22 [i_13]), (min(4761441544013697530, -102))))));
        var_29 = ((-(arr_13 [4] [i_13] [i_13] [i_13])));
    }
    #pragma endscop
}
