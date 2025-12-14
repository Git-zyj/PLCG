/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_12 = (max(-53, 211));
            var_13 = (max(((((arr_3 [i_1 - 2]) <= (arr_1 [i_1 - 2] [i_1 + 1])))), (max((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 - 1] [i_1 - 1])))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_14 = (!(arr_4 [i_2 + 2]));
            var_15 = (!2149513016);
        }
        var_16 = ((min((arr_0 [i_0]), 2149513016)));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_14 [i_3] = (~(min((-979843991045642486 >= 2149512997), 2145454279)));
        var_17 = (max((min(var_3, (arr_4 [i_3]))), (max((arr_4 [i_3]), (arr_4 [i_3])))));
    }
    var_18 = (((2145454280 | 65522) >> (((!var_7) ? var_11 : (max(var_5, var_3))))));
    var_19 = (max(2777, var_9));
    #pragma endscop
}
