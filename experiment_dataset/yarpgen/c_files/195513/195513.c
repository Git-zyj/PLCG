/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_10);
    var_13 = ((((((((var_0 >> (var_9 + 130)))) ? var_9 : (~var_7)))) < (min(4026113342560823545, (!3525420707)))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (arr_1 [i_0 - 1]);
                    arr_7 [i_0] = ((((((((1934862930477192122 ? (arr_6 [i_0 - 2] [i_0] [i_0 - 3]) : var_5))) ? (((-4026113342560823546 + 9223372036854775807) >> 14)) : (769546589 * var_5)))) ? -var_3 : (arr_0 [i_1 - 3] [i_1 - 3])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_15 = 3300;
                        arr_10 [i_0] [i_2] [22] [i_0] = (((((var_10 ? var_7 : (arr_8 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3])))) ? (((arr_6 [i_0] [i_1] [i_1]) ? -4026113342560823534 : var_0)) : (arr_5 [i_0 - 2] [i_0 - 3] [i_0 - 3])));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1 - 3] [i_2] [i_2] [i_0] = ((arr_4 [i_1 - 3]) * (min((((arr_9 [i_0] [i_0] [i_2] [i_0] [i_4]) ? 3525420710 : var_8)), (arr_1 [i_0 - 2]))));
                        var_16 += ((((~(arr_12 [i_2] [i_0 + 1]))) * var_5));
                        arr_15 [18] [18] [i_1 + 1] [i_1 - 1] [i_2] |= (((((1 >> (var_8 - 1279537177))))) * (min(-1615282201, ((126 ? 1 : var_1)))));
                        var_17 = (min(var_17, ((((~-93) < ((((arr_4 [i_1 - 3]) < (arr_4 [i_1 - 1])))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_18 = (((arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_5] [i_0] [i_5]) ? var_10 : ((var_5 ? var_3 : var_5))));
                            var_19 = var_5;
                            var_20 = (~(arr_0 [i_0 - 3] [i_1 - 3]));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_21 = (~-8469759060395507960);
                            var_22 = (max(var_22, ((((arr_18 [1] [1] [i_0] [15] [i_0] [i_0 - 2] [i_0 - 1]) >> var_11)))));
                            var_23 = -9167906945392607454;
                            var_24 = (arr_4 [i_2]);
                        }
                        var_25 = ((2579532708 >> (var_3 - 3904420884568561315)));
                        var_26 ^= ((((var_9 ? 80 : (arr_20 [i_0] [19] [5] [i_2] [i_2]))) / (arr_16 [i_2] [i_0] [i_2])));
                        var_27 &= (arr_8 [i_2] [i_2] [i_2] [i_1 - 1] [i_0] [i_2]);
                    }
                }
            }
        }
        var_28 = ((((min((((arr_13 [i_0] [10] [i_0]) ? var_10 : 50138)), ((min(18203, 1)))))) ? (!var_0) : ((((-(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_29 = ((15 ? 1983195474 : 64));
    }
    #pragma endscop
}
