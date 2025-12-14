/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 *= (((((((-(arr_1 [i_0]))) >= (arr_1 [i_0])))) + (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_16 = ((var_4 | (min((((-19 ^ (arr_4 [0] [i_1] [7])))), (min((arr_2 [4] [0] [i_1]), 4010510130979099180))))));
            arr_6 [i_0] [5] = ((18 ? (!127) : 37));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = (arr_1 [1]);
            var_18 = ((!((((arr_2 [i_2] [i_2] [i_0]) ^ ((max(14, (arr_4 [i_2] [i_2] [i_0])))))))));
        }
        var_19 = (arr_4 [6] [i_0] [i_0]);
        arr_9 [i_0] = ((((min((arr_4 [i_0] [i_0] [i_0]), (arr_1 [i_0])))) > (-19 <= -1730342862)));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_12 [6] = -var_7;
        var_20 = (max((((arr_10 [i_3 - 1] [i_3 - 1]) * (arr_10 [i_3 - 1] [i_3 - 1]))), (arr_10 [i_3 - 1] [i_3 - 1])));
        var_21 = (min(var_21, (~3137767934183085136)));
        var_22 = (arr_10 [i_3 - 1] [i_3 - 1]);
        arr_13 [13] = ((-22 + 2147483647) * ((((arr_10 [i_3 - 1] [i_3 - 1]) >= (arr_11 [i_3 - 1])))));
    }
    var_23 = (~var_12);
    var_24 = 9223372036854775804;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_5] [i_6] = (~16);
                    var_25 = (max((((!(14 < 13807)))), ((((arr_20 [i_4 - 2] [i_5] [i_6]) < 53)))));
                }
            }
        }
    }
    var_26 = (min((max(-876350569418504956, 3137767934183085136)), (((!(~1))))));
    #pragma endscop
}
