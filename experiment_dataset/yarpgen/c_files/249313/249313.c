/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_12 = ((-670247827 ^ ((min(100, (arr_10 [i_0 - 2]))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] = 45050251455457590;
                        arr_14 [i_0] [i_1] [8] = 93;
                        var_13 += (max(((var_6 ? (!var_7) : ((var_3 ? 9606 : 7054325411143670724)))), (((var_0 * ((var_11 / (arr_12 [i_0] [i_1 + 2] [i_3] [i_0]))))))));
                    }
                }
            }
        }
        var_14 = ((((arr_0 [6]) & var_10)));
        arr_15 [i_0] [i_0] = (~(((((var_5 ? 23 : 861913461)) == 224))));
        var_15 = (min(var_15, ((~((var_4 ^ (arr_10 [i_0 - 1])))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                {
                    arr_25 [i_4] [i_5] [i_4] [i_4] = 3867453814468457289;
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_16 += ((-(((arr_23 [i_8] [i_8]) / (((arr_20 [i_7] [i_7]) ? 73 : (arr_1 [i_7])))))));
                                var_17 += (min(0, ((var_8 ? (((arr_6 [i_4] [i_8] [i_6] [i_6 - 3]) ? 17907952125036432937 : var_0)) : ((((arr_23 [i_4] [i_6]) & -9606)))))));
                                var_18 = (((min(249, (max(var_10, 17907952125036432937)))) >= 1211633292));
                                var_19 = 1939794059;
                            }
                        }
                    }
                    var_20 -= 249;
                    var_21 = (min(((-(arr_21 [i_4] [i_5]))), ((((((arr_9 [i_4] [0] [i_5]) ? var_1 : (arr_7 [i_6] [i_4] [i_4])))) ? var_10 : var_6))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    var_22 -= (!670247830);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_23 = (min(18401693822254094025, ((((arr_24 [i_4] [i_4] [6] [i_11]) & (~-2340279073081831901))))));
                                arr_43 [i_4] [i_9] [i_10 - 1] [i_9] [i_10 - 1] [i_10 - 1] = (min((var_5 - var_8), ((var_5 ? (max((-9223372036854775807 - 1), var_0)) : 14579290259241094327))));
                            }
                        }
                    }
                }
            }
        }
        var_24 = (var_5 & var_1);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_25 = var_2;
        var_26 = ((((var_0 / (arr_28 [i_13] [i_13] [i_13]))) != (var_3 ^ 225)));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                {
                    arr_51 [i_13] [i_14] [i_15] [i_13] = (var_10 >= (~var_9));
                    arr_52 [i_13] [i_15] [i_14] [i_13] = (((arr_26 [i_13] [i_14] [i_15]) % (arr_28 [i_13] [i_13] [i_13])));
                    var_27 -= (((((arr_29 [6] [i_15] [i_14] [i_13] [i_13]) / 92)) - 670247824));
                }
            }
        }
    }
    var_28 = (!var_5);
    var_29 = ((var_6 - ((0 ? (~var_10) : ((min(var_3, -62)))))));
    var_30 = (((((var_5 & (1317627232 > var_4)))) || ((min(((201 ? var_2 : var_8)), (!var_5))))));
    #pragma endscop
}
