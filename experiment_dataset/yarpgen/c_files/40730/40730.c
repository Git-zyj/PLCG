/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_2 [i_0 + 1]) ? (((!(arr_0 [i_0])))) : (arr_1 [i_0] [i_0])));
        var_19 = ((!(arr_1 [i_0] [i_0 + 1])));
        var_20 = ((3572372069 ? 722595226 : 4294967295));
        var_21 = (~(arr_2 [i_0 + 1]));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((min((min((arr_2 [i_1]), (arr_0 [i_1 - 2]))), ((((arr_5 [0]) | (arr_5 [0])))))))));
        var_23 = (max(var_23, (--1)));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_12 [i_1] [i_1] = (min((((25 ? (arr_1 [i_1] [i_2]) : (arr_1 [i_1] [i_1])))), (arr_2 [1])));
                var_24 = (max((arr_10 [i_1] [i_1 - 1] [1]), (arr_4 [i_1] [i_1])));
            }
            var_25 = -227740348;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_26 = 1;

            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                var_27 = ((((4067226948 ? (arr_8 [i_1] [i_1]) : (arr_10 [i_1] [i_1] [i_1]))) / (arr_13 [i_5 - 1])));
                var_28 = (min(var_28, 1));
            }
        }
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            arr_21 [i_1] [i_1] = 4294967295;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_25 [i_1 - 2] [i_6 - 2] [i_1] [i_7] = (!65535);
                arr_26 [i_1 - 1] [i_1] [i_1] [i_6] = 3417847738;
                var_29 = ((max((arr_8 [i_1] [i_1]), (50206 < 1))));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_30 += (((((59777 ? (max((arr_17 [16] [i_6] [16]), (arr_1 [16] [16]))) : ((max(722595226, (arr_19 [1] [18]))))))) ? (((722595226 ? 65535 : (arr_20 [i_1] [i_1] [i_1])))) : ((((((((!(arr_23 [i_1] [1] [i_8]))))) < 9187686535668388491))))));
                var_31 = ((+(((!-1) * (((arr_10 [i_1] [i_1] [i_8]) | (arr_9 [i_1])))))));
            }
            var_32 += ((~(((!(arr_18 [16]))))));
        }
    }
    for (int i_9 = 3; i_9 < 17;i_9 += 1) /* same iter space */
    {
        arr_32 [18] = ((((-(arr_27 [4] [18] [i_9 - 1] [i_9 + 2])))) ? (((arr_27 [i_9] [18] [i_9 - 1] [i_9]) ? (arr_27 [0] [18] [i_9 - 1] [18]) : (arr_27 [i_9 - 3] [12] [i_9 - 1] [i_9]))) : ((min((arr_27 [i_9] [12] [i_9 - 1] [16]), (arr_27 [0] [14] [i_9 - 1] [i_9 - 1])))));
        var_33 = ((((arr_20 [i_9 + 1] [i_9] [i_9]) ? (arr_20 [i_9 + 2] [1] [i_9 + 1]) : 56438)));
        var_34 = ((+(((arr_8 [i_9 + 1] [0]) ? (((((arr_18 [2]) >= (arr_6 [2] [i_9]))))) : (((arr_0 [i_9 - 1]) ? 1549245542649196147 : (arr_31 [i_9] [i_9])))))));
        var_35 = (((arr_29 [i_9 - 2]) || (((~(arr_23 [i_9] [14] [i_9 + 2]))))));
    }
    var_36 ^= (((var_6 + var_1) / var_7));
    #pragma endscop
}
