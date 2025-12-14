/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((((min(((var_11 ? 194 : 1)), var_14))) ? ((~(max(var_8, var_9)))) : ((((~18446744073709551615) ? var_10 : var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((arr_2 [i_0]) ^ (arr_2 [i_0]))));
        var_17 |= (!252);
        arr_3 [i_0] = (((arr_0 [i_0]) ? ((min((arr_1 [9] [i_0]), (min((arr_0 [i_0]), (arr_2 [i_0])))))) : (((18139888770239142300 & 5) | (var_8 ^ var_5)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_18 = ((((((arr_4 [i_2 - 2]) && ((!(arr_11 [i_2])))))) * (arr_8 [i_1] [i_2] [i_3])));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_19 = (((!var_11) ? (!196) : (!1)));
                        var_20 = (((!var_8) || (arr_13 [9] [i_2])));
                        var_21 = ((((var_10 & (arr_4 [i_3])))));
                        var_22 = ((~((~((min((arr_8 [i_4] [i_3] [i_1]), (arr_0 [i_1]))))))));
                    }
                    var_23 = ((-(!var_2)));
                    var_24 = (max(((((arr_5 [i_1] [i_1]) < (((arr_8 [i_1] [i_2 + 2] [i_3]) >> 1))))), (max((arr_9 [i_2 - 1] [i_2 + 1]), (arr_5 [i_2 - 3] [i_2 + 2])))));
                }
            }
        }
    }
    var_25 = ((0 ? -50 : 3));
    #pragma endscop
}
