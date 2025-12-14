/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_0));
    var_17 ^= (!10);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [4] |= (~-40);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                arr_8 [i_0] = (arr_4 [i_0] [i_0] [2]);
                arr_9 [i_0] [i_1] [i_0] = 38211;
                var_18 = (arr_5 [i_0] [3] [i_2 + 1]);
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_12 [i_0] [i_1] [i_0] [i_3] = (max(((min(27324, (251 / 19863)))), ((min((arr_10 [i_0]), 38211)))));
                var_19 = (arr_3 [i_0]);
            }
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                arr_17 [i_0] [i_0] [i_4 + 1] = (1 / var_14);
                var_20 = (((75 ? (arr_7 [i_4 - 3] [i_4 - 2] [3]) : (arr_13 [i_4 - 3] [i_4 - 2] [3]))));
            }
            arr_18 [i_0] [i_0] [i_0] = 147209612;
            var_21 ^= 88;
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((4659 ? (((arr_1 [i_5]) * (!1))) : (((((1 ^ -1757717622) >= ((1 ? (arr_16 [9] [i_5] [i_5] [i_5]) : (arr_11 [8])))))))))));
        var_23 = 1;

        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            var_24 = ((((((((27325 ? (arr_10 [i_5]) : (arr_5 [i_5] [i_6] [i_6]))) == var_1)))) <= (arr_19 [i_5] [i_6])));
            var_25 = 8638974473962621591;
            arr_25 [i_5] [i_6 - 3] [i_6] &= (arr_11 [i_6 - 4]);
        }
        var_26 = (min(((min(231, (~var_3)))), 3659885917769822864));
    }
    #pragma endscop
}
