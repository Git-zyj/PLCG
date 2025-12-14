/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(31356, 11729766937749963257));
        var_21 -= (((arr_0 [i_0]) ? var_3 : -20421));
        var_22 = var_5;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] = (min((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((((4095 ? 16157 : 4090194855)) <= var_5)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_1] = var_4;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_23 = (((((((var_0 ? (arr_3 [i_0] [i_0] [i_0]) : var_15))) ? (((min(8191, 15514)))) : (max(4095, var_16))))) ? var_13 : (((arr_5 [i_3 + 1]) ? 463442386 : (arr_5 [i_3 - 1]))));
                            arr_15 [i_0] [i_1] [i_0] [i_2] [i_0] [i_3] [i_3] = ((~((var_1 ? var_12 : var_19))));
                            arr_16 [4] [i_1] [i_2] [i_1] [i_3] = 416603105213356235;
                            var_24 = ((!(((((max(4108103275, 3907458859))) ? (arr_2 [i_3 + 1]) : var_5)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_25 -= 0;
                            var_26 = ((var_15 ? 33314 : ((6863601238039546200 ? (arr_3 [i_5] [0] [i_2]) : var_12))));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_2] [i_3] &= ((((((((var_5 ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : (arr_17 [i_0] [i_1] [i_1])))) ? (arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1]) : (min((arr_5 [i_0]), var_19))))) ? var_14 : (arr_14 [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            var_27 = (max((((((45117 ? 536870656 : var_10))) ? 33414 : 7714147452530467084)), -6569183245037647000));
            var_28 = (((arr_1 [i_6 - 2]) + (max(var_11, (arr_1 [i_6 + 2])))));
        }
    }
    var_29 &= var_1;
    var_30 = ((13529769012233211744 ? 2113929216 : 4080));
    #pragma endscop
}
