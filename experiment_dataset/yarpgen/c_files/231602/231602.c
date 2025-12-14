/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [1] = ((-(arr_2 [1])));
        arr_4 [9] = max((!22626), (min((((!(arr_1 [i_0])))), (((arr_2 [i_0]) ? var_14 : var_14)))));
        var_16 = (min(var_16, ((max((max((arr_2 [i_0]), var_1)), 0)))));
        arr_5 [9] = 1074383353276060849;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_1 - 1] [i_1] [i_1 - 1] = -var_1;
            var_17 = (arr_8 [i_1]);
        }
        var_18 |= ((((-3502906748927095022 ^ ((((arr_9 [i_1 + 1] [i_1] [i_1 - 1]) ? (arr_6 [i_1] [i_1]) : 0))))) & ((((min(var_4, 1)))))));
    }
    var_19 = (min((((min(65535, 3112225099040313397)) * -1)), ((min(((max(var_4, var_3))), (4294967286 & var_6))))));
    #pragma endscop
}
