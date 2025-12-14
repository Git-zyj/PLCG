/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((var_12 <= (arr_1 [i_0])));
        var_21 |= (arr_0 [i_0]);

        for (int i_1 = 4; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_5 [8] [i_1 - 1] = (~161);
            var_22 ^= var_7;
        }
        for (int i_2 = 4; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] = ((((var_0 >= (arr_0 [i_0]))) ? var_1 : (arr_6 [i_0] [i_2])));
            var_23 = (min(var_23, (((!(((var_3 ? (arr_4 [i_0]) : (arr_0 [9])))))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        arr_11 [i_3 + 2] [i_3] = var_6;

        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            arr_16 [i_3] [9] [4] = (arr_1 [i_4 + 2]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {
                        arr_21 [i_5] = (~var_6);
                        arr_22 [i_3] [i_5] [i_6] [i_6] = var_4;
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        var_24 = (min(var_24, var_3));
        arr_26 [i_7] = (((((arr_0 [8]) ^ var_19)) >= 27503));
        var_25 = (var_1 < ((((-25 && (arr_3 [i_7 - 1] [i_7]))))));
    }
    var_26 = (max(var_26, var_15));
    #pragma endscop
}
