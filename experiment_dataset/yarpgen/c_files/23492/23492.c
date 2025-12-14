/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = (max(var_19, var_10));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_20 = (min((((arr_0 [i_0] [i_0]) ? 248 : (arr_2 [i_0]))), (((~((max(var_6, (arr_1 [i_0])))))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_21 = (min((((!((((arr_6 [i_0] [i_1] [i_2]) ? 33423360 : var_5)))))), (min((var_11 ^ var_1), (((~(arr_5 [i_0] [i_1] [i_2]))))))));
                arr_8 [i_1] [i_1] [i_1] [1] = 1;
            }
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                arr_12 [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_3]);
                var_22 = ((arr_2 [i_0]) ? ((217 ? 18446744073676128261 : ((((arr_5 [i_0] [i_1] [i_1]) <= -115))))) : -var_13);
            }

            for (int i_4 = 4; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_23 = ((-(((arr_16 [i_1] [i_1] [i_1] [i_4 + 2]) ? -18446744073676128261 : (((max((arr_16 [i_1] [i_1] [i_4] [i_5]), (arr_15 [i_1] [i_1] [i_1] [i_1])))))))));
                    var_24 = (((((~(arr_15 [i_0] [10] [i_0 + 1] [i_1])))) ? ((max((arr_15 [i_0 - 2] [i_1] [i_4] [i_1]), var_16))) : ((((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]) < (arr_15 [i_0] [i_1] [i_4 - 1] [i_1]))))));
                    var_25 = (min((max(248, var_5)), ((min((arr_11 [i_0 + 2] [i_0 + 2] [i_5]), var_10)))));
                    arr_17 [i_1] [i_1] [i_5] = (max((((arr_16 [i_1] [i_1] [i_1] [i_1]) * (((arr_15 [i_1] [i_4] [i_1] [i_1]) ? 185 : var_7)))), -111));
                    var_26 = (max((((((14 ? 27 : (-2147483647 - 1)))) ? ((var_4 ? (arr_5 [i_0] [i_4 + 2] [i_5]) : (arr_16 [i_1] [i_1] [i_4] [14]))) : var_3)), (((((var_9 ? (arr_1 [i_0 - 2]) : var_2))) ? -299616647 : (((arr_7 [i_1] [i_1] [i_5]) * -115))))));
                }
                var_27 = 13607;
                arr_18 [i_4] [i_1] [i_1] [i_0 - 1] = 18446744073676128257;
            }
            var_28 *= var_1;
        }
    }
    var_29 |= var_5;
    #pragma endscop
}
