/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 ? (((~49) ? var_6 : var_7)) : (-1740035255 & 10)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (!-7844317686877555186);
        var_15 = ((31 ? ((((max((arr_0 [i_0]), 38969))) + var_1)) : (max(((92 ? -69 : 0)), ((var_1 ? (arr_0 [i_0]) : var_11))))));
        var_16 = (((min((min(16383, (arr_2 [i_0]))), -2087937857)) % ((((((arr_2 [i_0]) ? 51658 : var_9)))))));
        arr_3 [i_0] = (((((arr_0 [i_0]) + ((var_3 ? 1 : (arr_2 [3]))))) & (((-((((arr_0 [1]) <= 8277076407364006865))))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                arr_8 [3] [i_1] [12] [7] = (arr_6 [1] [i_1] [2]);
                var_17 &= 1186940367;
                arr_9 [5] [i_1] [10] = (max(97, (((var_5 + var_3) ? (arr_4 [i_1] [i_2 - 3]) : (arr_2 [i_1])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_18 = (min(var_18, 1481618272));
                            arr_14 [i_0] [7] [i_0] [i_3] [i_0] [4] = (arr_10 [6] [i_3] [8] [11]);
                        }
                    }
                }
            }
            var_19 = 511;
            arr_15 [i_0] [4] [i_0] = (max((min(10, var_12)), ((((arr_1 [i_0]) >= (max((arr_7 [i_1] [9] [12] [6]), 738543487)))))));
        }
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_20 = (max(var_20, ((((((arr_16 [i_5 - 1]) <= var_8)) ? (arr_18 [i_5 - 1]) : 1151795604700004352)))));
        var_21 *= ((-((((((arr_17 [i_5 - 1]) ? 0 : 2087937857)) < ((((arr_18 [i_5 - 1]) ? (arr_18 [3]) : 12513))))))));
    }
    var_22 = ((1740035271 & ((var_11 ? var_0 : var_4))));
    #pragma endscop
}
