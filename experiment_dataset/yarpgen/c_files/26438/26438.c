/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (((min(var_5, (var_10 <= var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 |= 37;
                    var_17 = (arr_7 [i_0] [i_0] [i_1] [i_0]);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (max(var_18, (((((min(var_11, (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? ((18373 ? (arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]) : (arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 1]))) : (arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]))))));

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            arr_13 [i_1] [i_1] = ((((664698367 ? var_0 : (((12801587491639796649 ? var_11 : (arr_2 [i_2] [i_1] [i_4])))))) + ((min((min((-127 - 1), var_12)), var_12)))));
                            var_19 = (min(var_3, var_9));
                            var_20 = ((((arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) - 3663747514)) % (((((arr_8 [i_3 - 1] [6] [17] [i_3 - 1] [i_3 - 1] [i_3 - 1]) >= (arr_8 [4] [i_3] [10] [13] [i_3 - 1] [i_3 - 1]))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_21 = (min((arr_16 [i_1]), var_7));
                            var_22 = (min(var_22, ((((var_1 + 2147483647) >> (var_0 + 3138074609184648847))))));
                            var_23 = (((((var_2 + (arr_9 [i_1] [i_1])))) + (min(((max(var_12, (arr_8 [i_0] [i_1 - 2] [i_5] [i_2] [1] [17])))), ((var_13 - (arr_10 [1] [i_1] [23] [i_5])))))));
                        }
                        var_24 = ((+(max((var_13 + var_12), (((arr_19 [i_0] [i_0]) ? (arr_9 [i_1] [i_2]) : 48))))));
                        arr_20 [i_1] [10] [22] [i_1] = 925885633;
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_1] = (((max(37, 18373))));
                }
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
