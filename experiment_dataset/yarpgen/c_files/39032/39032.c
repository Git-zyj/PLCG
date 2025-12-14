/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_3] = (((((-180529272036147890 ? (180529272036147890 & 4091498155842128365) : var_2))) ? (max(9458, (max(var_2, (arr_13 [i_1] [i_1] [i_2] [3]))))) : (min(((((arr_2 [i_2]) > var_9))), var_1))));
                        var_13 = (max(var_13, ((((min(((48526 ? (arr_6 [i_0] [i_1] [i_0]) : -1483060517358923392)), (var_2 % -2198973997412851092)))) ? (arr_0 [2]) : (((((1483060517358923391 ? (arr_9 [i_0] [11] [1] [i_3]) : 27144))) ? (((var_7 ? (arr_5 [i_3]) : (arr_6 [i_3] [i_3] [i_3])))) : ((-1483060517358923391 / (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2])))))))));
                        var_14 = ((-(((((~(arr_13 [i_0] [13] [i_0] [9])))) ? 1483060517358923392 : (max(4194303, var_5))))));
                        var_15 = 1483060517358923380;
                        var_16 = ((((((min((arr_11 [i_0] [i_3] [8] [i_0] [i_0] [i_1]), var_7)) - (65535 != 49701))) + 9223372036854775807)) << ((((((-5491709835638953801 ? (arr_5 [i_0]) : var_9)) << ((((max(var_12, (arr_1 [i_1] [i_2])))) - 61427)))) - 1911840)));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_17 [i_4] [i_2] [i_4] [i_4] = 65535;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_17 = (((((0 ? 27381 : (arr_5 [i_2])))) || -1483060517358923392));
                            arr_21 [i_5] [14] [i_2] [i_4] [i_4] = (arr_12 [i_0] [i_0] [i_4] [i_0]);
                            arr_22 [i_0] [i_1] [i_2] [i_4] [i_5] |= (arr_18 [i_0]);
                        }
                        var_18 = ((-3186083488437751285 ? (max((arr_15 [i_2] [i_2]), ((55261 ? 7269 : var_8)))) : var_10));
                        var_19 = (min(var_19, (((((((var_12 + 0) ? (arr_2 [i_0]) : (!11709)))) > (((~var_12) ? 1618924043168838626 : var_7)))))));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_20 = (var_0 > var_6);
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((((var_9 ? (arr_12 [1] [9] [i_4] [i_2]) : (arr_24 [i_0] [i_1 + 2]))) != ((-4194293 ? (arr_12 [i_4] [i_4] [i_4] [i_0]) : (((var_4 <= (arr_18 [3]))))))));
                        }
                    }
                    var_21 = var_1;
                    arr_26 [i_0] [5] = (-(min(9223372036854775797, ((min(4711, 11709))))));
                }
            }
        }
    }
    var_22 = (max(((max(var_9, var_12))), (var_1 - var_11)));
    var_23 = 5898;
    #pragma endscop
}
