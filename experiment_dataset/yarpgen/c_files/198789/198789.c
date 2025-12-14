/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 - (((max(var_3, var_5)) << (2776543943165053152 + 30516)))));
    var_14 = ((var_10 - (((var_12 << (((max(var_6, var_10)) + 12589)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [10] [i_0] = 18446744073709551615;
        arr_4 [i_0] = (((((var_10 ? -16 : (arr_1 [i_0])))) - ((24 ? 30 : 3418451198837639674))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_2] = (max((max(((38680 ? 18446744073709551585 : (arr_9 [i_0] [i_2]))), (var_11 - -6758763843239149479))), -2035));
                        var_15 = (((((3 + var_8) ? (arr_11 [i_0] [21] [i_3] [17] [i_3]) : (var_10 - 31585)))) ? ((-((min(-31564, -31599))))) : (max((arr_9 [i_0] [i_0]), (arr_9 [i_1] [i_2]))));
                        var_16 = (arr_6 [i_0] [i_1]);
                        var_17 = (arr_12 [i_0] [i_1] [i_3] [i_3]);
                        arr_14 [i_0] [i_0] = ((var_11 || (-588659992 && -31620)));
                    }
                }
            }
        }
        var_18 = ((((((arr_6 [i_0] [i_0]) << (var_7 - 1667))) << (((~var_6) - 12577)))) - (32 - 45));
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        var_19 = (arr_17 [5]);
        var_20 = ((var_3 - ((-(min(var_7, (arr_18 [i_4])))))));
        var_21 = var_11;
        var_22 = ((arr_17 [i_4 + 1]) ? ((((arr_18 [i_4 - 1]) ? var_6 : (arr_17 [i_4 - 1])))) : ((-(var_1 / var_10))));
    }
    var_23 = -31599;
    var_24 = ((var_11 << ((((var_6 ? var_5 : ((var_2 ? var_3 : var_7)))) + 1837675692))));
    #pragma endscop
}
