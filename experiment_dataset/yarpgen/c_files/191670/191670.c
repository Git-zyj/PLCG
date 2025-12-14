/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = (max(var_14, (max(var_7, var_10))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 2] = ((-2785929933 - (((2785929933 ? (arr_1 [i_1 - 1]) : 2147483647)))));
                        arr_12 [i_0 - 1] [i_0 - 2] [i_2] [i_0 + 1] [i_0 + 1] = (arr_4 [i_0 - 2] [i_1 - 2] [i_0 + 1]);
                        var_15 = (max(var_15, ((((((arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? 2147483647 : (arr_8 [i_2] [i_2] [i_2]))) == ((((!((max(var_7, 4105134946))))))))))));
                    }
                }
            }
        }
        arr_13 [i_0 - 1] [i_0 - 2] = (max((arr_1 [i_0 - 2]), (max(2147483647, (arr_9 [i_0 - 1] [i_0 - 1] [10] [i_0 + 1])))));
        arr_14 [i_0 - 2] = ((~((~(arr_2 [i_0 - 1] [i_0 + 1])))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_16 = (max((((arr_15 [i_4 + 3]) & (arr_15 [i_4 + 3]))), (arr_15 [i_4 - 1])));
        var_17 = ((~(((min(122, 2519602686)) % 1))));
    }
    #pragma endscop
}
