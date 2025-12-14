/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (min((arr_3 [i_1]), (((!(!var_13))))));

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                arr_8 [i_0 + 1] [i_1] [i_2 - 1] = (!var_3);
                var_15 += ((((min((!var_5), var_2))) << (((((arr_7 [10] [10] [10]) / var_10)) - 85247320852591))));
            }
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                var_16 -= var_5;
                arr_12 [i_0] [i_0] [i_1] = max(var_14, (((max(var_5, var_6)) + (arr_7 [1] [1] [i_1]))));
                var_17 ^= (arr_2 [1] [6]);
            }
            arr_13 [i_1] = arr_3 [i_1];
            arr_14 [i_0 + 2] [i_1] [7] = ((!((max((min(var_6, (arr_3 [i_1]))), 6682306192988536205)))));
            var_18 = (max((((!(arr_7 [i_1] [i_0 + 2] [i_1])))), 6682306192988536205));
        }
        var_19 += (max((min(((max(73, 115))), (((arr_10 [i_0] [2] [i_0 + 3]) / var_9)))), ((((!var_13) & var_10)))));
        arr_15 [i_0] = (arr_1 [i_0 + 1]);
    }
    var_20 = var_12;
    var_21 = var_0;
    var_22 ^= (((!var_14) & var_12));
    #pragma endscop
}
