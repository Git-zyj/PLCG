/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_3);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = var_4;
            arr_6 [i_1] [i_0] = var_8;
            var_12 = ((var_1 % (arr_2 [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] [i_0] = (((arr_3 [i_0] [i_0]) ? 17796883094580950540 : var_1));
            var_13 = ((var_2 << (((~-2799194157195510453) - 2799194157195510452))));
            var_14 = ((!(arr_10 [i_0] [i_0])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] = max((arr_10 [i_0] [i_0]), ((var_9 ? (arr_9 [i_3]) : (min(var_4, var_8)))));
            var_15 = max(((((((arr_0 [i_0]) == var_1))) % 31097)), (arr_1 [1]));
            var_16 = ((~(19412 != 0)));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 &= -24536;
                            var_18 = (max(((~(((arr_16 [i_3] [i_4] [i_5] [i_5]) + var_9)))), (arr_13 [i_0] [i_0])));
                            arr_22 [i_6] [i_6] [i_6] [6] = -var_1;
                            var_19 = (min(var_19, var_3));
                        }
                    }
                }
            }
        }
        var_20 = ((var_6 ? ((((((arr_10 [18] [i_0]) / 9223372036854775807)) > ((((arr_7 [i_0]) / (arr_18 [i_0]))))))) : ((~(((arr_8 [i_0] [i_0]) ^ var_8))))));
        var_21 = (((max(((var_0 || (-9223372036854775807 - 1))), var_7))) % var_6);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_22 = var_3;
        var_23 = (((((var_2 + (arr_23 [i_7])))) ? (arr_24 [i_7]) : var_6));
    }
    #pragma endscop
}
