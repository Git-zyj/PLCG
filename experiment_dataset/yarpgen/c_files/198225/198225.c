/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((((-(arr_6 [i_0 + 2] [i_0 - 1] [11] [i_1 - 2]))) + 2147483647)) << ((((arr_6 [i_0 - 1] [i_1] [i_1] [i_1 - 2]) > (arr_6 [i_0 + 2] [i_0] [12] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [15] = (((arr_1 [i_3] [i_1 - 2]) ? (((arr_2 [i_0] [i_0 + 1]) | (~var_1))) : (((~(max((arr_4 [i_1] [i_2]), var_11)))))));
                                arr_14 [i_0] [i_4] [i_2] [i_3] [i_4] [i_3] [i_3] = (max((arr_2 [14] [7]), var_10));
                                var_17 += (((max((arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_1 + 1] [i_1 - 1] [13] [i_4]), (((-(arr_4 [i_3] [i_0])))))) | ((((((2386625906 ? var_3 : (arr_0 [10] [1]))) < 1908341380))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max((!var_2), var_2));
    var_19 = (max(var_15, (((var_1 || var_6) ? (((var_11 ? var_14 : var_9))) : 2986027064565456533))));
    #pragma endscop
}
