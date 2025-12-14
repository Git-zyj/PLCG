/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] = -255;
            var_11 -= (((min((((arr_1 [i_0] [i_1]) ? var_10 : var_0)), (((!(arr_3 [i_0] [i_0])))))) & (((((((var_4 ? var_1 : (arr_1 [i_0] [i_0])))) || var_1))))));
        }
        var_12 = (min((var_8 / var_9), ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_13 = (!var_8);

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = (max(((min((arr_3 [i_2] [i_3]), (arr_3 [i_0] [i_2])))), (((arr_7 [i_2] [i_2]) ? var_0 : (arr_7 [i_0] [i_2])))));
                var_14 = (max(var_14, var_5));
                arr_11 [i_0] [i_0] = (arr_6 [i_2] [i_0]);
                var_15 += (((arr_9 [i_0] [i_2] [i_3] [3]) ? (((var_3 ? (arr_9 [i_2] [i_2] [i_2] [i_0]) : var_2))) : (max(var_6, (arr_9 [i_3] [i_2] [i_2] [i_0])))));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_16 = var_1;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_17 += (((arr_18 [i_0]) / var_6));
                            var_18 = var_6;
                        }
                    }
                }
                var_19 &= (max((((arr_4 [i_2] [i_0] [i_4]) ? var_10 : (arr_4 [i_0] [i_4] [i_0]))), ((-(arr_4 [i_4] [i_2] [i_0])))));
                arr_19 [i_0] [i_0] = (((((-(arr_14 [i_0] [i_2] [i_0] [i_4])))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (min((((var_5 <= (arr_7 [i_0] [i_4])))), (((arr_15 [i_0]) - var_6))))));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_22 [i_0] = ((((min(var_7, var_3))) ? var_10 : (~var_9)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_20 = (max(var_7, (arr_15 [i_0])));
                            var_21 = var_0;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_22 = (arr_8 [i_10] [i_0]);
            var_23 ^= ((((((arr_23 [i_0] [i_0] [i_0] [i_0]) ? (arr_23 [i_10] [i_0] [i_0] [i_0]) : var_1))) ? (((!(((var_10 ^ (arr_6 [i_10] [i_0]))))))) : (((arr_25 [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_10] [i_10] [i_10]) : (arr_14 [i_0] [i_10] [i_0] [i_10])))));
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_24 = (min((min(((var_6 ? (arr_26 [i_11] [i_0] [i_11] [i_0] [i_0] [i_0]) : var_0)), var_8)), (((-(arr_27 [i_0] [i_11] [i_11] [i_0] [i_0] [i_0]))))));
            var_25 -= (min((((var_3 + 2147483647) << (var_7 - 15769689590134919508))), ((((max((arr_2 [i_0] [i_0] [i_0]), var_9))) ^ ((-(arr_2 [i_0] [i_0] [i_0])))))));
            arr_32 [i_0] |= (arr_23 [i_0] [i_0] [i_0] [2]);
            arr_33 [i_0] = var_2;
            var_26 = (max(var_26, (arr_20 [i_0] [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    var_27 = ((!(!var_3)));
                    arr_40 [i_13] = (((arr_8 [i_0] [i_12]) | (max((arr_38 [i_13] [i_13] [i_13]), var_4))));
                    var_28 -= ((min((arr_8 [i_13] [i_0]), ((var_8 ? (arr_36 [i_12] [i_12] [i_13]) : var_4)))) & ((((~var_1) ? (arr_14 [i_0] [i_0] [i_13] [i_0]) : (((arr_20 [i_0] [i_0] [i_0]) >> (((arr_12 [i_0] [i_0] [i_0]) + 13866))))))));
                }
            }
        }
        arr_41 [i_0] = (~(max(var_6, (arr_38 [i_0] [i_0] [8]))));
    }
    var_29 = var_0;
    #pragma endscop
}
