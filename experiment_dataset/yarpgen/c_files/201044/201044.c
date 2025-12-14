/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 += var_14;
                    var_17 += var_8;
                    var_18 += (arr_0 [i_0]);
                }
            }
        }
        var_19 = (~var_11);
        arr_6 [i_0] = var_5;
        var_20 *= ((36 ? (((-94 ? 111 : -1571024529))) : -8170482835320262866));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_21 += ((var_0 ? var_7 : (arr_7 [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_22 = ((!(arr_7 [i_3] [i_3])));
                        arr_18 [i_3] [12] [i_5] [i_5] [i_7] [i_7] [i_3] = var_14;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_21 [8] [i_4] [i_5] [2] [i_8] &= 34628;
                        arr_22 [i_3] [1] [i_5] [i_3] [1] [1] [i_4] = (arr_17 [i_5 - 1] [i_5] [17] [i_5 + 2] [i_5 - 2]);
                    }
                    var_23 = -var_4;
                    var_24 = (arr_15 [i_3]);
                    var_25 = (max(var_25, ((var_12 ? -1571024529 : -107))));
                }
                arr_23 [i_3] = (min(var_1, ((~(arr_0 [i_5 + 3])))));
            }
            var_26 = ((((min(var_2, var_9))) ? -123 : var_11));
        }
        var_27 += var_11;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_26 [i_9] [i_9] = 1571024528;
        var_28 = (arr_12 [i_9] [i_9] [i_9]);
        var_29 *= var_8;

        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            var_30 = (max(((((-(arr_27 [i_10 + 2] [i_9]))))), ((max(var_13, var_9)))));
            var_31 = -var_9;
        }
    }
    #pragma endscop
}
