/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = (min(var_15, var_10));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_16 += (max(-19, -9223372036854775794));
                    var_17 = (((max(114, -60))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_18 = var_7;
                    var_19 *= ((((!(arr_8 [i_4] [i_3] [i_4]))) || ((min(8039797215512923240, var_13)))));
                    var_20 |= (min((1002422165 - var_9), ((-(arr_7 [i_0] [6])))));
                    arr_15 [i_0] [i_0] = var_0;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_20 [i_0] [i_4] [3] [i_0] = ((var_12 ? -418745735 : (var_3 > var_9)));
                        arr_21 [i_0] [i_3] [i_4] [i_5] [i_0] [i_0] = (~(arr_14 [i_5] [i_0]));
                        arr_22 [i_3] [i_0] = ((!(4229089465 > var_7)));
                        var_21 = (arr_19 [i_5] [i_0] [i_0] [i_3] [i_0] [i_0]);
                    }
                }
            }
        }
        arr_23 [i_0] [i_0] = (i_0 % 2 == 0) ? (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_18 [i_0] [i_0]))) >> (((((arr_18 [i_0] [i_0]) * (arr_2 [i_0]))) - 3004283266)))) : (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_18 [i_0] [i_0]))) >> (((((((arr_18 [i_0] [i_0]) * (arr_2 [i_0]))) - 3004283266)) - 1185635773))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = (max((~3876221560), var_1));
        var_22 = (min(var_22, ((((((-var_12 << ((((8039797215512923239 ? -68 : 125)) + 82))))) ? ((var_12 ? (max(var_11, var_13)) : 123)) : (((arr_4 [i_6] [i_6] [i_6]) ^ (arr_4 [i_6] [i_6] [i_6]))))))));
    }
    #pragma endscop
}
