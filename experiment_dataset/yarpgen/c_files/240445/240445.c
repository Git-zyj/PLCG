/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, ((max((~-32757), var_7)))));
        var_12 = (((65514 >> var_2) ? (arr_1 [i_0]) : ((min(var_10, var_10)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((-(((var_9 < var_1) ? (~var_3) : (~var_8))))))));
        var_14 = (max(var_14, (((max((min(var_7, (arr_0 [i_1] [i_1]))), (arr_0 [i_1] [i_1]))) ^ ((((min((arr_0 [i_1] [i_1]), var_3))) ? var_8 : ((var_9 ? var_4 : var_5))))))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    var_15 -= ((min(((var_1 ? (arr_10 [i_4] [18] [18] [i_2]) : var_1)), (((var_2 ? var_10 : (arr_8 [i_3] [i_3] [i_4])))))));
                    arr_12 [i_4] [i_4] [i_4] [i_4] = ((((max(var_8, var_0))) > ((var_4 ? (arr_6 [i_4 + 3]) : var_9))));
                }
            }
        }
        var_16 = (min(var_16, ((min((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 2]), (min(((min(63, var_3))), (max(var_0, var_10)))))))));
        arr_13 [i_2] = ((var_0 ? ((((var_3 || (arr_6 [i_2 + 2]))))) : (((((1099955058 ? var_7 : var_8))) ? (395096151 <= var_5) : (((arr_10 [i_2] [i_2 + 1] [16] [i_2]) ? var_0 : var_1))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                {
                    var_17 = ((min(0, var_0)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_18 ^= var_0;
                                var_19 -= ((~(arr_6 [i_6 + 2])));
                            }
                        }
                    }
                    arr_26 [i_6] = (~var_0);
                }
            }
        }
        arr_27 [i_2] = (arr_7 [i_2]);
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_20 = (((~(arr_4 [i_9]))));
        var_21 = ((((((min(var_4, var_10))) ? (var_7 == var_9) : 83)) >> ((((max((!var_8), var_5))) - 14949))));
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 18;i_12 += 1)
                {
                    {
                        var_22 = (max(var_0, ((-(min((arr_36 [i_12]), (arr_28 [1])))))));
                        arr_39 [8] [i_9] [i_10] [i_10] [i_12] [i_9] = (((var_0 ^ var_3) != var_0));
                    }
                }
            }
        }
        var_23 *= ((~(min(var_5, var_1))));
    }
    var_24 = ((var_1 >= (max(var_0, var_5))));
    #pragma endscop
}
