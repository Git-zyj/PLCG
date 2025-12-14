/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_9 ? var_7 : var_17));
    var_21 = ((!((((108086391056891904 >> (18338657682652659721 - 18338657682652659696))) <= var_18))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_22 = (((((arr_1 [i_0]) + 14955708647033421771)) != (((((arr_1 [i_0]) || (arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_23 = (((((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [i_2]) : (arr_7 [i_0] [i_1] [i_1] [i_2])))) ? -1 : var_12))) ? (arr_5 [i_0] [i_2 + 2] [3]) : ((max((127 / var_6), (arr_4 [i_2 - 3] [i_2 + 1] [i_2 - 3]))))));
                    var_24 = (min(var_24, ((max((((arr_7 [i_2 - 1] [i_1] [i_2 - 1] [i_0]) >> (32767 - 32742))), ((min(149, (arr_2 [i_2 - 3])))))))));
                    arr_8 [i_2] [i_1] [i_0] = ((((((arr_5 [i_2] [i_2 + 2] [i_2]) ^ 18446744073709551615))) ? (max(18338657682652659712, 127)) : (((arr_7 [i_0] [i_0] [i_1] [i_0]) ? (arr_4 [i_2 - 3] [i_2 + 1] [i_2]) : 1))));
                    var_25 = -1;
                }
            }
        }
        var_26 = ((!((((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [3] [i_0]) : 1)))));
        var_27 = (min(var_27, ((((((!var_0) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : ((~(arr_5 [i_0] [13] [i_0]))))) * (var_18 < var_6))))));
        arr_9 [i_0] [i_0] = ((-((-(105553116266496 != var_17)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((-1 ? 20946 : 18446744073709551615));
        arr_14 [i_3] [19] = var_15;
    }
    var_28 = ((var_9 ^ (max(((119 ? var_17 : 4294967295)), (min(var_11, var_7))))));
    #pragma endscop
}
