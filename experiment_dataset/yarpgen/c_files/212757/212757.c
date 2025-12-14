/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((((-615367885 ? 19300 : -2734422491650486352))) ? var_3 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = ((((65076 / 460) ? ((var_3 ? (arr_4 [i_0] [i_0] [i_0]) : 22127)) : var_10)));
                                var_17 = (((((-(~27131)))) ? (max((943596088 ^ 615367885), ((39 ? 2734422491650486351 : 1834883548)))) : (arr_1 [i_1 + 1])));
                                var_18 = (min(var_18, (min(((((!var_0) + (((arr_1 [i_0]) ? var_0 : (arr_6 [i_0] [i_0] [i_0] [i_0])))))), (((arr_10 [i_0] [i_0] [i_0] [i_2]) ? (-26412 ^ 615367880) : (((arr_0 [i_1 + 1]) ? var_14 : 2734422491650486339))))))));
                                arr_12 [i_0] [i_4] [i_2] [i_4] = (var_2 ? 4947966571274927975 : var_6);
                                arr_13 [i_0] [i_1] [i_4] [i_2] [i_4] [4] [i_4] = ((((max(((((((arr_6 [i_4 + 1] [i_3 + 1] [i_2] [i_0]) + 2147483647)) >> (((arr_11 [0] [i_1 + 1] [i_2] [i_3] [i_4 + 1]) - 1031685511))))), (min((arr_0 [i_2]), 17376787025769213072))))) ? (var_14 ^ 59165) : (((arr_1 [i_2]) ? ((max(var_3, -1849103732))) : (max((arr_8 [4] [i_2] [i_4]), 3361727727689801946))))));
                            }
                        }
                    }
                    var_19 = (max(var_19, 55));
                }
            }
        }
    }
    var_20 = (615367860 + -615367906);
    #pragma endscop
}
