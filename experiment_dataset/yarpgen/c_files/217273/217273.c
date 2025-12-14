/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(((max((max((arr_2 [11]), 197)), var_9))), 2147483636));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_13 = (!(-0 % -1646380926));
            arr_6 [1] [i_1] [i_1] = -2147483637;
            var_14 = 11503767769014073832;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (min(var_15, (arr_8 [4] [4] [i_2])));
            var_16 |= arr_2 [i_2];
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_13 [18] [2] = ((((((var_5 * var_9) << (((var_8 - var_3) - 3609993696912839878))))) ? ((max((max(var_3, var_6)), -2147483637))) : ((var_10 >> (-2147483637 - 2147483618)))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_17 = (~11503767769014073833);
                        var_18 = var_2;
                    }
                }
            }
            var_19 = 38824;
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_20 = (((((~(arr_21 [i_0] [10] [i_7])))) ? (min((arr_14 [8]), (arr_20 [i_6]))) : var_6));
                    var_21 = (min(var_21, (((((((max((arr_10 [19] [i_0] [i_0]), -1))) ? ((max(var_2, var_4))) : (((arr_22 [i_0] [i_0] [16]) ? (-127 - 1) : 908425093880782484)))) ^ ((max(((var_8 ? 31 : 7860450212679451566)), (arr_10 [i_0] [i_0] [i_0])))))))));
                }
            }
        }
        arr_24 [i_0] = ((((max(-118, 1))) - (var_3 >= 2305884547659641314)));
        var_22 = var_3;
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
        {
            arr_31 [i_8] [i_8] [i_8] = ((-(((-32767 - 1) ? (arr_11 [4] [i_9]) : (arr_22 [i_8] [i_9 - 2] [i_8 - 2])))));
            var_23 = (~var_0);
        }
        for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
        {
            arr_34 [1] [i_8 + 3] [i_8] = var_8;
            arr_35 [i_8] = (((arr_33 [i_8 + 4] [i_10 + 3]) - ((((arr_20 [i_8 + 2]) && var_9)))));
        }
        var_24 = var_0;
        var_25 = ((((arr_16 [6] [i_8] [8]) ? var_9 : 0)));
        var_26 = ((arr_32 [i_8 - 3]) ? 127 : (arr_32 [i_8 + 1]));
        arr_36 [i_8] = ((var_3 ? (arr_17 [14] [i_8] [i_8 + 2] [i_8 + 2] [i_8]) : 178));
    }
    for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11 + 2] = (arr_27 [i_11] [i_11]);
        var_27 = ((~(arr_38 [i_11])));
        var_28 = (arr_27 [1] [i_11]);
        arr_41 [i_11] = 1;
    }
    var_29 = ((var_11 ? (~var_6) : ((((max(127, var_7))) ? (var_5 * var_7) : (1 + var_1)))));
    #pragma endscop
}
