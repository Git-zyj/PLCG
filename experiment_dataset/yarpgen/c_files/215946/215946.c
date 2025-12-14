/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((!(((1 ? 209 : var_14))))) ? 0 : ((var_8 ? var_1 : (max(1, 3044640315)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [8] [i_1] [i_1] = 244;
                    var_18 = (!0);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = 805499753;
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (((min((arr_12 [i_3] [1] [i_1] [i_1] [i_1] [i_0]), 3044640315)) + (((-(arr_12 [i_0] [5] [i_2] [i_0] [i_2] [i_2]))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_20 = (min(var_20, (((-(((arr_4 [i_0]) | (arr_4 [i_1]))))))));
                            var_21 = (((max((min(var_13, 3493858529)), ((((arr_4 [i_5]) == (arr_2 [i_4])))))) << ((((((arr_1 [i_0]) || 1)) || ((max(1, var_10))))))));
                            var_22 = ((((min(1862461879, 32043))) ? ((((((arr_2 [i_0]) ^ (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))) <= ((~(arr_7 [i_0])))))) : 208));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_23 = ((-(max((0 < 0), (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
                            var_24 = (min(var_24, ((max((((((~246) + 2147483647)) >> (((~11088201837725020373) - 7358542235984531238)))), (((209 < (arr_0 [i_1])))))))));
                            var_25 = (arr_3 [i_6]);
                            var_26 = (min(var_26, 10));
                        }
                        var_27 = (max((arr_8 [i_4] [i_1]), (arr_8 [i_0] [i_1])));
                        var_28 ^= ((-(((((arr_19 [i_0] [i_1] [i_2]) / (arr_19 [i_2] [i_2] [i_2]))) * (max(1, 0))))));
                    }
                    var_29 = (max(var_29, ((((((var_6 || (arr_15 [i_0] [i_1])))) << (((~9) + 21)))))));
                }
            }
        }
    }
    var_30 = (min(((max(var_0, ((157 ? 1 : 21915))))), ((6806888497355485855 ? -1 : ((var_6 ? var_16 : var_7))))));
    var_31 ^= var_1;
    #pragma endscop
}
