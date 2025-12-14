/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_9 [3] [1] = arr_1 [i_0] [i_1];
                arr_10 [i_2] = 0;
                var_14 = (arr_6 [i_1] [14]);
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_14 [i_0] [i_1] = (~var_1);
                arr_15 [10] [3] [i_1] [i_0] = (max((((((~(arr_1 [i_0] [2])))) ? (!var_8) : (((arr_12 [i_1] [i_3]) ? 0 : 52)))), (((!(((5233 ? 0 : 238))))))));
            }

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_15 = var_1;
                var_16 = (((~12679) ? var_7 : (((((7047869621252341298 ? 60303 : (-9223372036854775807 - 1)))) ? 120 : (!var_1)))));
                arr_18 [13] [i_1] [i_1] = (arr_0 [i_4]);
                var_17 = (max(8191, (((((((arr_17 [5] [i_1]) ? (arr_2 [i_1]) : 120))) <= 2234351394)))));
            }
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_21 [i_5] = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? ((min((arr_2 [1]), (arr_2 [i_0])))) : var_0));
            var_18 = ((1 ? ((-(arr_5 [i_0] [i_5]))) : 93));
            arr_22 [i_5] [i_5] = 1;
        }
        arr_23 [i_0] = (1 ? ((~((var_13 ? var_7 : var_1)))) : var_8);
    }
    var_19 = (var_4 % 60314);
    var_20 = ((((121 ? (!13495) : ((max(57345, 57330)))))) ? 9007199254740991 : var_5);
    var_21 = (((((min(var_8, -17575)))) ? var_1 : var_3));
    #pragma endscop
}
