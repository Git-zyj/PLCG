/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = (((max(3592081056, (arr_1 [i_0] [i_0 - 1]))) / (max(-736897553009508415, 736897553009508415))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = ((((((arr_0 [i_0 + 1] [6]) ? (arr_2 [i_3]) : var_18))) ? ((((arr_0 [i_1] [i_2]) < 736897553009508414))) : (min((arr_0 [i_1] [i_3 + 1]), (arr_2 [i_2])))));
                        var_21 *= 24620;
                        var_22 = (~-14435);
                        var_23 = -1626092824;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_24 |= var_10;
        var_25 = (((arr_10 [i_4] [i_4]) ? (arr_11 [i_4] [i_4]) : (arr_10 [i_4] [i_4])));
        var_26 = (max(var_26, (((((arr_11 [i_4] [12]) << (var_6 + 11408)))))));
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_27 = (max(var_27, ((((arr_2 [5]) << (127 - 127))))));
        var_28 -= (!(((1 ? ((-94 ? -1626092824 : var_3)) : 16672))));
        var_29 &= 3184842450;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_30 = (((((((var_10 ? 2199023255296 : (arr_12 [i_8])))) ? ((var_3 ? (arr_5 [i_5] [i_5] [i_9]) : var_15)) : (1 <= -3))) < (((((-1626092824 ? -2199023255297 : (arr_3 [i_5 + 2] [i_6])))) ? var_13 : (((arr_18 [i_5] [11] [9]) ? var_11 : (arr_2 [i_5])))))));
                            var_31 = 48863;
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            arr_29 [i_5] = 18131;
                            var_32 = (max(var_32, (((var_18 % (min(var_15, 3273317801)))))));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_33 = (((16672 ^ 5139699022463418115) / (max(((961279317 ? (arr_30 [i_5] [i_6] [i_6] [i_5] [4]) : (arr_11 [i_5] [i_5]))), var_10))));
                            var_34 = 46;
                        }
                        var_35 = var_2;
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_36 = var_10;
        var_37 = (((((((-1347975284 - 32767) % ((28148 | (arr_9 [0]))))) + 2147483647)) << ((((var_11 + ((((arr_33 [i_12]) ? (arr_10 [i_12] [i_12]) : var_12))))) - 6103499272304284061))));
    }
    var_38 = 24228;
    var_39 = var_16;
    var_40 = ((min((var_13 && var_17), var_9)));
    #pragma endscop
}
