/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_5, ((var_13 ? 0 : 8478837274333579372))))) ? (~var_5) : 93);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = -var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, (arr_9 [i_0] [i_1] [i_2] [i_3])));
                        var_17 = (((-94 <= 127) ? (~-93) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3])));
                    }
                }
            }
        }
        var_18 = ((93 ? 251 : 251));
        var_19 -= ((-(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_20 = var_8;
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_21 = ((var_1 ? (arr_20 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2]) : (arr_20 [i_5 - 3] [i_5 - 4] [i_5 - 4] [i_5 - 4] [i_5 - 4])));
                                var_22 = (~((185058413 ? var_5 : var_13)));
                            }
                        }
                    }
                    var_23 = (238 ? 19732 : 15);
                }
            }
        }
        var_24 &= 17;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_25 &= ((-17469 ? var_4 : var_2));
                    arr_30 [12] [i_9] [i_10] &= (!var_2);
                    var_26 = (-9 && 4294967295);
                }
            }
        }
        var_27 = (arr_19 [i_4] [i_4] [i_4]);
    }
    for (int i_11 = 4; i_11 < 18;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    {
                        var_28 = ((1 ? (~-var_1) : (((var_9 >= (arr_34 [i_14 - 1] [i_14] [i_12 - 1]))))));

                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            var_29 = (((arr_43 [i_15] [i_14] [i_13] [i_13] [i_12 + 2] [i_11 + 1] [i_11 + 1]) ? (arr_1 [i_11 - 1]) : (var_12 + var_12)));
                            var_30 = (((min((((arr_7 [i_11] [i_11]) ? var_1 : 6)), (12821201362948992697 <= var_1))) | (((arr_42 [i_11] [i_12 + 2] [i_13] [i_14 + 1] [i_15 - 1]) ? ((var_12 ? var_3 : (arr_37 [i_11]))) : (((-17469 ? 1619577857 : 7340018233724215015)))))));
                        }
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            var_31 = 381493649;
                            var_32 = ((-(((!(((var_9 ? var_10 : var_8))))))));
                            var_33 = (max(var_33, (((((arr_11 [i_11] [i_12] [i_12] [i_12] [i_12 - 1]) - (arr_11 [i_12] [17] [i_12] [18] [i_12 - 1])))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            var_34 = ((var_4 ? (arr_0 [i_13]) : var_2));
                            var_35 = var_5;
                        }
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            var_36 &= min(var_11, 14290023341979310442);
                            var_37 = (max((((~(((arr_36 [i_14] [i_14]) * var_7))))), ((var_4 ? (max(var_7, 15784915148319554356)) : (((var_6 ? 4609486692762886522 : var_5)))))));
                        }
                    }
                }
            }
        }
        arr_52 [i_11] = ((((max((arr_2 [i_11] [i_11 - 2]), (arr_2 [i_11] [i_11 - 2])))) ? ((((var_10 ? var_6 : var_1)))) : (((((var_11 ? var_1 : (arr_50 [i_11] [i_11 - 1] [i_11] [i_11] [i_11])))) ? 2 : ((17490 ? var_8 : var_12))))));
    }
    var_38 = (max((((!(5502667064506109652 & var_1)))), var_7));
    var_39 &= max(var_6, var_11);
    #pragma endscop
}
