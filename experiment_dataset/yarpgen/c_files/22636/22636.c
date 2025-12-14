/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 21303;
    var_15 ^= var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((~(((arr_2 [i_0] [i_0]) ? ((var_3 ? var_4 : (arr_2 [i_0] [17]))) : (((44232 ^ (arr_2 [i_0] [18]))))))));
        arr_3 [i_0] [i_0] = ((~((((min((arr_2 [i_0] [i_0]), var_0))) ^ var_11))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = (!-var_12);
            var_17 *= ((var_3 >= (((max((arr_9 [i_2] [i_2] [8]), (arr_9 [i_1] [i_1] [i_1])))))));
            var_18 = -var_3;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_21 [i_3] [2] [i_5] [i_4 + 1] [2] = 28268;
                            arr_22 [i_1] [i_1] [i_1] [i_3] [i_4 - 1] [i_4 + 1] [i_3] = ((((~(arr_14 [i_5] [i_3] [i_2]))) + (--10)));
                            arr_23 [i_3] = min((((-(arr_8 [i_1])))), ((~(arr_4 [i_4]))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            var_19 -= (max(((min(6129, 116))), (((!16129463144305041086) + 44232))));
            var_20 &= ((+((+(((arr_17 [i_1] [12] [i_6] [12] [i_1]) / (arr_7 [i_6])))))));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            arr_30 [i_1] [i_7] = ((((arr_18 [i_1] [i_1] [i_1]) / (arr_18 [i_7] [i_7] [i_7]))));
            var_21 = 32108;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_22 = var_10;
                    var_23 |= (+(min(((21314 >> (((arr_34 [i_1]) + 60)))), (min(-2117074168, (arr_28 [i_8] [i_9]))))));
                }
            }
        }
        var_24 = var_7;
        var_25 ^= (((2117074186 ? var_6 : (max((arr_20 [i_1] [i_1] [2]), (arr_13 [i_1] [i_1] [i_1]))))));
    }
    for (int i_10 = 1; i_10 < 21;i_10 += 1)
    {
        arr_38 [i_10] = (12420836224194390677 > var_10);
        var_26 = (max(var_26, (((((max(var_2, (min(151, var_10))))) ? (max((arr_25 [i_10] [3] [i_10 - 1]), -2117074201)) : (((((((((arr_35 [i_10]) >= (arr_24 [i_10] [0]))))) > ((4235272763 ? var_9 : 2117074169)))))))))));
        /* LoopNest 3 */
        for (int i_11 = 4; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    {
                        var_27 ^= -2117074171;
                        var_28 ^= ((((min(var_9, var_1)) >= (((var_3 ? (arr_28 [i_10] [i_11]) : (arr_17 [i_10] [i_13] [i_10] [0] [i_13])))))));
                        arr_47 [i_10] = (-16105260902906694561 % (arr_9 [i_10 + 1] [i_11 + 1] [i_12 - 1]));
                        var_29 = ((!(arr_32 [i_10] [i_10 - 1])));

                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_51 [i_14] [i_10 - 1] [i_12 - 3] [i_13] = (arr_40 [i_14]);
                            arr_52 [i_14] = ((var_1 ? (((572496017 + (arr_29 [i_12] [11])))) : (min(4235272763, (arr_26 [i_14] [i_12 - 3] [i_14])))));
                            var_30 -= ((!((!(!var_6)))));
                            var_31 = (min(((((arr_27 [i_10] [19]) || (arr_16 [i_10] [5] [i_11] [i_10])))), (arr_8 [i_10 - 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        var_32 = ((!(arr_1 [i_15])));
        var_33 = ((-572496014 & ((-2117074168 ? 5977638862509488828 : 16791755481272759493))));
    }
    #pragma endscop
}
