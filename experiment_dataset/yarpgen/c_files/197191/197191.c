/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= max(186, (max(110, var_15)));

    for (int i_0 = 4; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_20 = ((-(((((17 ? (arr_1 [i_0] [i_0 - 1]) : var_3))) ? ((max(163, (arr_0 [i_0])))) : ((min((arr_1 [i_0 - 1] [i_0]), 91)))))));
        arr_4 [i_0] = (1 && 31);
        arr_5 [i_0] [i_0 + 2] = ((((0 > (((109 || (arr_1 [i_0] [i_0]))))))));
        arr_6 [i_0] = var_0;
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_12 [6] = (!-2);
            var_21 = ((~(arr_2 [i_2])));
            arr_13 [17] [i_2 + 1] [i_2] = arr_0 [i_2];
            arr_14 [17] [17] = max(var_2, (arr_0 [i_1]));
            arr_15 [i_1] [i_2] = max((min(82, 63)), ((max((arr_10 [i_1] [i_1] [5]), 2))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_18 [i_3] [i_3] [i_1] = (max(((((min(var_11, (arr_10 [i_1] [i_3] [i_3])))) * (~255))), (((arr_1 [i_1] [i_1 - 2]) ? ((min(15, (arr_16 [i_1])))) : var_5))));
            var_22 *= ((((max((arr_1 [i_1 - 2] [i_1 - 2]), (arr_1 [i_1 + 2] [0])))) ? 138 : ((max((arr_11 [i_1 - 3]), 12)))));
            arr_19 [i_3] = arr_8 [i_1 - 1] [i_1 + 2];
        }
        var_23 = ((~(min(((min((arr_16 [i_1]), 64))), ((0 >> (173 - 150)))))));
    }
    #pragma endscop
}
