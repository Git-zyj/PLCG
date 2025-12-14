/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 ^ (!var_13)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = ((-(((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0])))));
        var_16 = ((-(min(65, 3479430913))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_17 = (arr_7 [i_1] [i_2]);
            var_18 = (max(1, -83));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_19 = (((((arr_0 [i_3] [i_3]) >= 38905453550737765)) ? -25706 : 1780727287));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_20 = (((arr_13 [5] [i_1] [i_3] [i_4]) < -25705));
                var_21 = (max(var_21, var_0));
                var_22 = 17529241903243741502;
            }
        }
        arr_14 [i_1] [i_1] = ((((!(arr_11 [i_1] [i_1]))) ? (((-96 % (arr_7 [i_1] [i_1])))) : (((arr_6 [i_1] [i_1]) ? var_2 : (arr_0 [18] [18])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_23 = (max(var_23, (((-27259 ? ((12736776536195619297 ? var_0 : var_7)) : (!var_1))))));
            arr_19 [i_5] [i_6] [i_5] = arr_17 [i_5] [i_5];
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_24 = ((64 ^ (554837388 + 214)));
            var_25 = (min(var_25, var_6));
        }
        var_26 = (min(var_26, ((((var_12 ? (arr_18 [i_5] [i_5] [i_5]) : var_3))))));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_27 |= (min(((-(min(var_6, var_0)))), ((((((arr_6 [20] [i_8]) ? var_3 : 126))) ^ (~var_6)))));
        var_28 = (max(var_28, ((((((((min(16170910049424007045, 24010))) ? (((!(arr_15 [4])))) : (arr_9 [i_8] [i_8] [i_8])))) ? (arr_12 [11] [i_8]) : ((((!(arr_10 [i_8] [i_8]))))))))));
    }
    #pragma endscop
}
