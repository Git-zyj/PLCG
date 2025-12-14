/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((((min(6746, 6))) ? (var_5 ^ var_5) : -8415338802390455777)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] = var_12;
                var_14 = ((((arr_2 [i_0] [i_1]) / (arr_2 [i_0] [i_1]))) - (+-1));
            }
        }
    }
    var_15 ^= 32767;

    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_16 = ((((((((15845855143026909292 ? var_12 : var_11))) ? (min(var_7, 2925479386516815880)) : ((((!(arr_10 [i_2])))))))) ? ((((16595775043309315384 >= 1) == var_0))) : ((var_5 ? (arr_10 [i_2 + 1]) : ((-(arr_10 [i_2 + 1])))))));
        arr_11 [i_2] = ((((var_9 ? (!-3413186166275045936) : (var_1 == -1))) >> (((~var_1) - 3820865980))));
        arr_12 [i_2] = (((((arr_9 [i_2 - 1] [i_2 + 1]) ? (!var_7) : (((!(arr_10 [i_2])))))) >= (((!((min((arr_9 [1] [i_2 + 1]), var_6))))))));
        var_17 = (max(var_17, (arr_10 [i_2])));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] = ((((min((arr_15 [i_4] [i_5] [i_6]), 65535))) ? (arr_19 [i_6] [i_5] [i_5] [i_4 + 2] [i_3] [i_3 - 1]) : (((min(-1643332824, var_6)) / ((1 ? 32757 : 23296))))));
                        var_18 = var_10;
                        arr_23 [5] [i_4] [i_5] [i_4] = var_11;
                        arr_24 [i_3] [i_4 + 1] |= (arr_21 [i_3] [i_3]);
                        arr_25 [i_3] [i_4] [17] [i_6] = (((arr_16 [i_3] [1]) > (((-2250558286120635551 ? ((15521264687192735736 ? (arr_19 [i_3] [i_5] [i_5] [i_6] [i_3] [i_5]) : (arr_19 [i_3] [i_4] [i_4] [7] [14] [i_6]))) : var_7)))));
                    }
                }
            }
        }
        arr_26 [i_3] = (((!var_5) || ((((((arr_13 [i_3]) ? 1 : var_1)) << (35877 - 35867))))));
        arr_27 [i_3] = var_10;
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_33 [i_7] [i_7] = (arr_19 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]);
            arr_34 [i_7] = ((!(arr_13 [i_8])));
            arr_35 [i_7] = (((((arr_13 [i_7 + 1]) ? 1 : (arr_13 [i_7 - 1]))) >= (((((((arr_32 [19] [i_8] [i_7]) <= var_7))) + (~var_5))))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                {
                    arr_41 [i_7] [i_7] [i_7] = var_3;
                    var_19 -= (arr_40 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 1]);
                    var_20 = var_2;
                    var_21 *= ((~(!4063232)));
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            arr_44 [i_7] [9] [i_7] = ((var_12 ? var_2 : (1 >= var_3)));
            arr_45 [i_7] [i_11] [i_7 - 1] = ((((2181431069507584 ? var_4 : 240)) == (((arr_17 [i_7] [i_7] [i_7] [i_7]) ? (arr_18 [i_7] [10] [11]) : var_1))));
        }
        arr_46 [i_7] = -var_1;
        arr_47 [i_7] = 240;
    }
    #pragma endscop
}
