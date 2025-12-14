/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_17 + var_7) ? var_3 : var_1);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_19 = ((!(arr_2 [i_0] [i_1 - 1])));
            arr_6 [i_0 + 1] [i_0 + 1] = ((~((((arr_2 [9] [10]) || (arr_5 [i_0]))))));
        }
        arr_7 [i_0 + 2] [i_0 + 1] = (arr_4 [i_0 - 1] [i_0 + 1]);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [2] [i_0] = (min(-var_5, (((!(((85 ? (arr_0 [i_0]) : -6639))))))));
            var_20 = 24503;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_21 = (3611674592688258083 != 3004929488533760766);
            var_22 += (arr_5 [12]);
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_23 *= arr_13 [i_0] [i_0] [i_0];
            var_24 = (arr_9 [i_4]);
            var_25 = (((((24503 ? -78 : 47))) ? (arr_10 [i_0] [i_0 - 1]) : var_0));
            var_26 = ((var_17 >> ((((-(min(var_8, var_6)))) - 1682772604162287364))));
            var_27 = (((min((((2735794971 ? 24503 : -124))), (arr_10 [i_0] [i_4]))) | (((1602051458937249300 + ((13936 ? -85 : 3611674592688258084)))))));
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_28 -= 107;
        var_29 ^= ((-((var_1 ? (arr_21 [20] [i_5]) : (arr_20 [i_5])))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_30 = var_1;
        arr_24 [i_6] = (max((((arr_23 [i_6]) ? (arr_23 [i_6]) : -4632149781276603963)), (((var_3 ? (arr_23 [i_6]) : (arr_23 [i_6]))))));
        arr_25 [i_6] = (max(1638444616, 22705));
        var_31 = ((((var_11 ? (arr_20 [i_6]) : (arr_22 [i_6])))));
    }
    var_32 = var_12;
    #pragma endscop
}
