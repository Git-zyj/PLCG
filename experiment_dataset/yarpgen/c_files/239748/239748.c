/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((((873431625 ? var_8 : 3421535663)) < var_1))), (min((~1), 873431616))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_2] [i_1] [i_3] = (min((((!(873431623 || 1095365500)))), (min((arr_5 [i_1] [i_1]), 3421535657))));
                        var_20 -= ((((((min(1, 2)) >= var_3))) <= ((min((arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]), (((-19242 || (arr_4 [i_2] [i_2])))))))));
                        arr_13 [i_0 + 1] [i_0 + 1] [i_2] [i_1] = 1;
                    }
                }
            }
        }
        arr_14 [i_0 - 1] = 5;
        arr_15 [i_0] [i_0] = (((((((((arr_5 [4] [i_0]) ? 3421535670 : 1))) ? -1121076700 : ((-5942856266186981104 ? 2147483647 : 32767))))) % ((-32744 ? (var_15 - var_17) : (1 != 28070)))));
        arr_16 [i_0] [i_0] = (min((((((var_9 ? (arr_4 [10] [i_0]) : (arr_7 [8])))) ? (arr_3 [1]) : ((~(arr_7 [i_0]))))), (((1 + -25988) + (arr_0 [i_0 - 1])))));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        var_21 = (((1655557263 ? (arr_7 [i_4 + 3]) : -108)));
        arr_19 [i_4] = max((((-9223372036854775807 - 1) / (arr_6 [i_4] [10] [i_4] [i_4 - 2]))), (arr_1 [i_4 + 3] [i_4]));
    }
    var_22 = var_2;
    var_23 = 1;
    var_24 = (var_9 / var_8);
    #pragma endscop
}
