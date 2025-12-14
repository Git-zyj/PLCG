/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = -978247906;
        var_14 = (max(var_14, 1));
        var_15 = (min(var_15, -1175691101134534654));
        var_16 = (((arr_0 [i_0 + 2]) != (arr_0 [i_0 - 2])));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_17 = (((arr_5 [i_1 + 1]) ? (((arr_4 [i_1]) | (arr_4 [i_1]))) : ((((arr_5 [i_1 + 1]) % (arr_5 [i_1 + 1]))))));
        var_18 = (max(var_18, ((((((arr_5 [i_1 - 1]) ? (arr_4 [2]) : (arr_4 [10]))) ^ (((((((var_9 ? var_3 : var_3))) >= (arr_4 [0]))))))))));

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_19 = (((arr_4 [i_1]) / (((arr_5 [i_1 + 1]) % (arr_4 [i_1])))));
            var_20 += (((((arr_8 [22] [i_1] [i_1 - 1]) / (arr_8 [22] [i_1] [i_1 - 1]))) >= (((arr_7 [i_1 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_2] [i_2 - 1] [5]) : -1175691101134534654))));
            var_21 = arr_6 [i_1] [i_1] [i_2];
            var_22 = ((((((var_11 == ((1175691101134534654 ? 1175691101134534653 : 1175691101134534653)))))) > ((((-1175691101134534653 ? -1175691101134534654 : (arr_7 [i_1] [i_2 + 1] [i_2]))) / (max(var_0, (arr_7 [0] [i_2] [i_2])))))));
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] = (min(((((arr_9 [18]) != (arr_9 [0])))), (max((arr_9 [6]), -1175691101134534656))));
        var_23 = (max(var_23, ((max(-1175691101134534655, 1175691101134534656)))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {

                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            var_24 = var_2;
                            var_25 ^= (~1175691101134534656);
                        }
                        var_26 = (arr_23 [i_3] [i_3] [i_4] [i_4] [i_6]);
                        var_27 = var_3;
                    }
                }
            }
            var_28 = (((arr_18 [i_3]) != -1175691101134534655));
        }
        var_29 = (min(((((var_11 ? var_11 : (arr_16 [i_3]))) != ((1175691101134534656 ? -1175691101134534648 : var_6)))), (((arr_7 [i_3] [i_3] [i_3]) || (((var_6 ? (arr_16 [14]) : (arr_17 [i_3] [i_3] [i_3]))))))));
        var_30 = ((-1175691101134534675 ^ (arr_11 [i_3])));
    }
    var_31 &= (min(var_12, ((var_2 ? var_1 : var_0))));
    var_32 = ((var_0 ? (max(var_10, var_11)) : (((var_7 & var_13) ^ (~var_8)))));
    var_33 = (((var_7 > var_9) != ((var_11 ? (max(var_11, -1175691101134534671)) : var_0))));
    var_34 = (((((((var_7 == -1175691101134534663) || ((max(var_13, 1175691101134534645))))))) / (min(1175691101134534648, var_8))));
    #pragma endscop
}
