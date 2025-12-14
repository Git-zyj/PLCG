/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_8));
    var_15 -= (min((((-24 ? var_12 : ((min(16, 111)))))), (((var_7 <= var_12) | ((var_5 ? var_13 : var_5))))));
    var_16 = (2600187438 - 31208);

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_17 = (max(var_17, (((((((arr_1 [i_0] [i_0]) + -var_1))) ? (((var_4 ? var_3 : (arr_1 [i_0 + 1] [i_0 - 2])))) : (min((((var_8 ? (arr_0 [i_0]) : var_9))), (((arr_2 [i_0]) ? var_9 : var_10)))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((((min((arr_6 [0] [i_1 + 1]), var_8))) ? (arr_5 [i_1 + 1]) : (arr_5 [i_0 - 1])));
                    var_18 = ((((((!(arr_5 [i_0 - 1]))))) <= ((-24773 ? var_5 : 2390766412428125))));
                    arr_9 [i_1] [i_1] = (((arr_7 [i_2 + 2] [i_2 + 2] [i_1]) ? var_5 : (((arr_7 [i_2 + 3] [i_2] [i_1]) ? (arr_7 [i_2 + 1] [7] [i_1]) : (arr_7 [i_2 + 2] [i_2 + 2] [i_1])))));
                    var_19 |= ((((min(59, -113))) ? ((max(1, 174))) : (arr_1 [i_2] [4])));
                }
            }
        }
        var_20 = (((var_2 ? (arr_4 [i_0] [i_0 - 3] [i_0]) : var_2)) >> ((min((arr_5 [i_0]), (max(var_13, var_4))))));
    }
    #pragma endscop
}
