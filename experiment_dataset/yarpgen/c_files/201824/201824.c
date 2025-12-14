/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((var_9 ? ((0 % (arr_0 [i_0]))) : 2518))) ? (~1) : (arr_1 [i_0])));
        var_12 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, ((((((1 ? 3162043018561684052 : -83225318))) ? 1189050284 : (((var_10 ? (arr_2 [i_0] [i_2]) : -8575968607308863197))))))));
                        var_14 = ((~((var_9 ? ((min(130078586, var_4))) : ((-3162043018561684030 ? (-9223372036854775807 - 1) : 6144))))));
                    }
                }
            }
        }
        var_15 = (((min((arr_0 [i_0]), 0))) ? 9223372036854775807 : ((min((((-(arr_6 [i_0] [i_0])))), ((-(arr_4 [i_0] [i_0] [i_0])))))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_16 = ((var_6 ^ ((562949684985856 ? var_4 : var_7))));
            var_17 = ((+((-4724 ? (arr_12 [i_4] [i_4]) : ((3236306614 ? 1 : 0))))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_21 [i_4] [i_7] [i_7] = (min((arr_16 [i_6] [i_7]), (((arr_15 [i_4 + 1]) ? (min(1970921316, (arr_20 [i_7] [14]))) : (arr_15 [i_4])))));
                    var_18 = 163;
                    var_19 = (arr_12 [i_6] [i_7]);
                }
            }
        }

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_24 [i_4] [12] [i_8] &= (((((min(-27778, 14))) ? ((var_0 ? -16899 : -1523355991)) : (arr_22 [i_4] [i_4] [i_8]))));
            var_20 = (max(var_20, (arr_13 [i_8])));
            arr_25 [i_4 - 1] [i_4 - 2] [i_8] = ((var_8 ? ((~(arr_14 [i_4 - 1]))) : ((-(min(var_4, 102))))));
            arr_26 [i_8] [11] = ((((0 ? 16891 : 2134183133))) ? ((-(arr_12 [i_4 - 1] [i_4 - 1]))) : var_8);
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_29 [i_9] [i_9] [i_9] = 252;
            var_21 += (((~(min(var_11, 50882)))));
        }
    }
    for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
    {
        arr_34 [4] [i_10 + 1] = min((min((min((arr_19 [i_10] [0] [i_10]), (arr_33 [i_10] [i_10]))), (~1))), (arr_19 [i_10] [i_10 + 1] [i_10 + 1]));
        var_22 += ((((((((var_4 ? 1334233492 : -30835))) ? 206 : (arr_27 [i_10 - 2] [i_10] [i_10 + 1])))) ? (min((((42296 ? var_7 : (arr_14 [13])))), (arr_32 [i_10 - 2]))) : (((arr_32 [14]) ? (((arr_14 [i_10 - 2]) ? 25037 : (arr_23 [i_10] [i_10]))) : (~10879)))));
        var_23 = (min(var_23, ((((arr_18 [i_10 - 1] [13]) ? (((arr_14 [i_10 - 1]) - (arr_27 [i_10 - 1] [i_10 + 1] [i_10 - 2]))) : (min((arr_15 [i_10]), var_4)))))));
    }
    var_24 &= ((var_7 && (var_8 && var_11)));
    var_25 *= var_11;
    var_26 = 23;
    #pragma endscop
}
