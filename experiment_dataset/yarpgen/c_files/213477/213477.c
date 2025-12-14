/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [1] [i_0] = 1;
        var_19 += (min(1, 6301913479335398622));
        var_20 = var_4;
        arr_3 [i_0] = (((~(var_18 >= 1))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (((((((arr_1 [i_1] [i_1]) / var_17))) ? (arr_5 [i_1]) : (54 == var_12))) * ((((242 << (211 - 188))))));
        var_21 = (max(var_21, (((!((min((((1 ? (arr_6 [i_1] [i_1]) : (arr_5 [i_1])))), (max(var_15, (arr_0 [i_1] [i_1])))))))))));
    }

    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        arr_11 [i_2 + 3] = ((((1 ? (arr_8 [i_2 - 2]) : var_9)) != (arr_8 [i_2 + 2])));
        var_22 = (min((max(((max(-362068050, 0))), ((var_6 - (arr_8 [i_2 - 1]))))), (((1 ? (1 >= 1) : 251)))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_23 = (((min((arr_8 [i_2 - 2]), (var_8 <= 1))) ? (((arr_9 [i_2] [i_3]) + (arr_10 [i_2 + 3] [i_2 + 4]))) : (arr_0 [i_2] [i_2 + 4])));
            var_24 -= min(1, (arr_8 [2]));
            var_25 = (min((((arr_13 [i_3]) ? (arr_8 [1]) : ((min(239, var_10))))), (min(((255 ? -1 : 1984)), ((max(var_2, (arr_0 [i_2] [i_3]))))))));
            var_26 += (min(((min((arr_0 [i_2 + 4] [i_2 + 4]), (arr_13 [i_2 + 3])))), (((var_13 > var_7) ? (min((-9223372036854775807 - 1), (arr_0 [i_2] [i_3]))) : ((((arr_10 [i_2] [i_3]) ? (arr_0 [i_2] [i_3]) : var_1)))))));
        }
        var_27 = var_1;
        var_28 = (max(var_28, ((((((min(var_15, (arr_9 [1] [i_2]))))) && (10273 / -6882983794610499560))))));
    }
    #pragma endscop
}
