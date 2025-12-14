/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 2])))) && var_11));
        var_14 = ((((max(var_7, var_6))) >= (arr_3 [i_0 - 1] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((((((var_10 ^ var_2) ? 0 : ((-9786 ? -12721 : 1163400580))))) ? (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1]) : (((max(var_13, var_0)))))))));
                                arr_15 [i_0] [i_4] [i_2] = max((max(var_0, (arr_10 [i_2] [i_1] [i_4] [i_3] [i_0 + 1] [i_2]))), ((max((arr_10 [i_0] [i_1] [i_2] [i_3] [i_0 + 2] [i_0]), var_10))));
                                var_16 = (max(var_16, (arr_3 [i_0] [i_0])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_1]);
                    arr_17 [i_0] [i_1] [i_2] = -13073;
                    arr_18 [i_0] [i_1] = (((((~(((arr_9 [i_0] [i_0] [i_2]) | (arr_14 [i_0] [i_0] [i_1] [i_2] [i_2])))))) ? (var_5 & var_11) : -var_3));
                    var_17 = (min(var_17, ((((arr_10 [i_1] [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_0]) ^ ((~((max(var_5, var_5))))))))));
                }
            }
        }
        var_18 = (min(((max(var_2, (arr_7 [i_0 + 2])))), ((((min(var_13, (arr_8 [i_0] [i_0] [i_0] [i_0])))) - 5084569113928475071))));
        arr_19 [i_0] = max((((arr_7 [i_0]) / (arr_1 [i_0] [i_0]))), (arr_8 [i_0] [i_0] [i_0] [i_0]));
    }
    var_19 = var_1;
    var_20 = 5084569113928475086;
    var_21 = var_10;
    var_22 &= ((var_10 & (max(var_5, var_8))));
    #pragma endscop
}
