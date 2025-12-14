/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((-(max(var_13, -1)))))));
    var_21 = (((((((((var_4 ? var_18 : var_7))) < (var_7 - var_5))))) * var_16));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_22 = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_23 += (((((((min(var_7, 252))) * ((-(arr_1 [i_1])))))) ? ((min((arr_10 [i_2] [i_3] [i_2] [i_1] [i_0]), (arr_6 [i_2])))) : (((!var_7) ? (((arr_0 [i_0]) ? var_18 : var_18)) : var_12))));
                            var_24 += (max((((max((arr_7 [i_0] [i_0] [i_0] [i_0 + 1]), var_16)))), (arr_9 [6] [i_0 - 2] [i_0] [i_0 + 1])));
                        }
                        var_25 = (max((arr_5 [i_0 + 1]), (arr_4 [i_1] [i_3])));
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_26 = 0;
            var_27 = (arr_9 [i_0 - 1] [i_0] [i_5] [i_5 - 1]);
            var_28 = (!1);
        }
        var_29 = (min(var_29, (arr_8 [i_0] [i_0] [i_0] [i_0 - 1])));
        arr_14 [i_0] = ((((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0] [i_0 - 2] [i_0 - 1]) : (1 && 2657995157))));
    }
    var_30 = (max(var_30, var_9));
    var_31 = ((((var_9 ? var_19 : var_7))) && (~var_2));
    #pragma endscop
}
