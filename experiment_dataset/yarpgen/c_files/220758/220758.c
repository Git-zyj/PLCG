/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_3;
        var_11 ^= (arr_0 [2]);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_12 = (max((max((((arr_0 [i_1]) ? var_2 : var_0)), (arr_0 [i_1]))), ((max(1, (((arr_1 [i_1]) | var_6)))))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_13 = ((~(max((max(var_9, var_1)), var_8))));
            arr_8 [i_1] = 1;
            arr_9 [i_1] [i_1] [i_2] = ((max(1, (max((arr_3 [i_1 - 1]), var_0)))));
            var_14 += (~(((((var_5 ? var_5 : (arr_6 [i_1] [i_1])))) ? (min(1, var_2)) : 549755813887)));
            var_15 += (arr_6 [i_1] [i_1]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = ((-549755813884 <= (max((!var_0), (arr_12 [i_1 - 1])))));
            arr_13 [15] [i_1] = (max((arr_5 [i_1] [10]), var_7));
            arr_14 [i_1] [i_1] = ((((max((arr_10 [i_1]), -549755813887))) || var_0));
            var_17 = (arr_11 [i_3]);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_18 *= var_6;
            var_19 = (min(var_19, var_4));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                var_20 = 2337;
                var_21 |= 17814821639856254171;
                var_22 = (arr_4 [i_1]);
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_27 [3] [i_5] [i_1] = ((((arr_1 [i_1 + 1]) ? 127 : 540142429501410882)));
                var_23 &= (((min((arr_16 [i_1 - 1] [i_5]), (arr_16 [i_7] [i_1 - 1])))) || ((min((arr_16 [i_7] [i_1 + 1]), (arr_16 [i_5] [i_7])))));
                var_24 = (((!0) ? (((((((arr_4 [i_1]) == var_5))) % var_3))) : ((((max(var_2, 1))) ? ((max((arr_5 [i_1] [i_5]), (arr_22 [i_1] [i_5])))) : var_9))));
                var_25 += ((~((~(~var_8)))));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_26 = (max(((((arr_11 [i_8]) ? (var_0 ^ 1) : (arr_20 [i_1] [i_1] [i_1])))), 549755813887));
                var_27 = (max((((!(arr_29 [i_5] [i_1 + 1] [i_8] [i_1])))), (arr_18 [6])));
                var_28 = (max(((((min(-8, var_9)) | (arr_6 [i_1 - 1] [i_1 - 1])))), (max((max(var_1, (arr_20 [8] [8] [i_8]))), (((var_7 < (arr_24 [i_1] [i_5] [i_1] [i_8]))))))));
            }
            var_29 |= ((var_1 ? (arr_11 [i_5]) : (max(((17845394185839518722 ? -116 : 1)), ((((arr_23 [i_1] [16] [i_1] [i_1]) <= var_4)))))));
            arr_30 [i_1] = ((((max((arr_21 [i_1 + 1]), (arr_18 [i_1 - 1])))) >= (max(var_2, (arr_1 [i_1])))));
            var_30 = (((max((arr_16 [i_1 - 1] [i_1 + 1]), (arr_18 [i_5])))));
        }
    }
    #pragma endscop
}
