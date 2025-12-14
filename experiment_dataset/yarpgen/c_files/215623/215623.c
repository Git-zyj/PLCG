/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max(var_8, ((var_1 ? var_7 : (7 > var_4)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        var_11 = (max(5594274424815501185, (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((237 / (min(3, (2761322867 > 32760)))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_12 ^= ((min(908754276, var_9)));
                            arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] = (min(-5359961617870920912, 30));
                            arr_17 [i_3] = (min(var_3, ((var_6 ? ((8191 ? (arr_9 [i_0] [i_4]) : (arr_15 [i_3] [8] [2] [i_3] [i_0]))) : (arr_7 [i_0] [i_1] [i_2])))));
                        }
                    }
                }
            }
            var_13 *= ((3730933357 ? (var_5 == var_7) : (arr_9 [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_14 ^= (arr_13 [i_0] [i_0] [i_0] [i_0]);
            arr_20 [i_5] [i_0] [i_0] = ((var_0 || (((12594964328511877004 << (((arr_19 [i_0] [i_5] [i_0]) + 24370)))))));
            var_15 = (min(var_15, var_8));
        }
        var_16 = var_3;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_17 = (max((((((min(var_6, 17008292295183948397))) || ((((-13765 + 2147483647) << (((var_5 + 951107904440728792) - 1)))))))), ((((1438451778525603238 ? 17008292295183948387 : 43786)) - 0))));
        var_18 = (max(var_18, (((var_3 ? ((min((arr_22 [i_6 + 2] [i_6]), var_3))) : (var_2 | var_9))))));
        arr_23 [i_6] = (arr_22 [i_6] [i_6]);
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = (((((((arr_22 [i_7] [i_7]) == (arr_22 [i_7] [i_7]))))) >= (min(731856725, 17008292295183948378))));
        var_19 = (arr_24 [i_7]);
    }
    var_20 = ((((((max(var_2, var_1)))) < var_8)));
    var_21 = ((var_9 ? (((((28838 >> (var_2 - 51640)))))) : var_5));
    #pragma endscop
}
