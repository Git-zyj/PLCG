/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-364965373041198443 > 3986878109);

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_13 = (((((arr_1 [i_0]) >= (((arr_2 [i_0]) ? -364965373041198443 : var_6)))) ? ((((!(var_8 >= var_10))))) : var_8));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_14 = (max(var_14, (((478263666 ? ((var_9 ? var_7 : (arr_2 [i_0]))) : -364965373041198443)))));
            arr_5 [1] [i_1] [i_1] = (((arr_2 [i_0 + 1]) > (arr_2 [i_0 - 1])));
            var_15 = ((~(arr_1 [i_0 + 3])));
        }
        arr_6 [i_0] = ((-(max((arr_2 [i_0 - 1]), (((-364965373041198457 >= (arr_4 [i_0] [7] [i_0]))))))));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_16 ^= ((((((arr_0 [i_2 + 1]) ? (arr_0 [i_2 + 1]) : (arr_8 [2])))) ? (((-(((!(arr_7 [i_2 + 1]))))))) : ((((arr_2 [i_2]) >= var_6)))));
        var_17 = (max(((((var_5 ? var_2 : 13182155)))), (max(((var_0 ? (arr_8 [i_2]) : var_3)), (((var_9 ? var_8 : var_2)))))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = 2637;
        var_18 = ((62898 ? 2637 : 0));
        var_19 = (max(var_19, (-1154139503 >= 3975263777)));
        arr_12 [i_3 - 1] = -42618;
        arr_13 [i_3] [i_3 + 2] = arr_1 [i_3];
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        arr_16 [i_4] = var_2;
        var_20 = (((((1954074225 ? 8 : 34))) ? (((65528 ? 0 : var_9))) : (arr_8 [i_4])));
        arr_17 [i_4] = ((-(arr_0 [i_4 - 1])));
        var_21 *= ((((((65535 >= (arr_2 [i_4 - 1]))))) >= (arr_1 [i_4])));
        var_22 = ((~(arr_3 [i_4 - 2] [i_4 - 3])));
    }
    #pragma endscop
}
