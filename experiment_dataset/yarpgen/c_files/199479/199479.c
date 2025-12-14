/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-2147483647 - 1);
        arr_3 [21] [i_0] = 8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_1] = (((((4294967283 - (arr_0 [i_1])))) ? (arr_8 [i_3]) : 28));
                    arr_13 [i_3] [i_1] [i_1] [i_1] = ((-99 >> (4294967283 != 17578584724779229816)));
                }
            }
        }
        arr_14 [i_1] [i_1] = ((((((arr_6 [i_1] [i_1]) | (arr_8 [i_1])))) / (~var_8)));
        var_21 = (min(var_21, (((!(arr_1 [i_1] [i_1]))))));
        arr_15 [i_1] = ((((arr_5 [i_1]) ? 10 : 22742)));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((max((((max(255, var_11)) << (((0 || (arr_4 [i_4] [0])))))), (!20552))))));
        arr_18 [i_4] = ((((((~(arr_7 [i_4])))) | ((13 ? (arr_4 [i_4] [24]) : 4294967283)))));
        var_23 = (arr_8 [i_4]);
        arr_19 [i_4] &= (arr_10 [i_4] [8] [i_4]);
    }
    var_24 = var_7;
    var_25 = var_12;
    #pragma endscop
}
