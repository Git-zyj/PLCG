/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_17 ? (min(var_13, var_17)) : ((((var_11 || (((19378 << (19379 - 19368))))))))));
    var_19 = min(((((var_15 << var_8) <= 62))), ((~((max(var_14, var_14))))));
    var_20 |= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_21 |= (((((arr_0 [1]) ? (var_8 && 13559797809495380367) : ((var_8 | (arr_2 [i_0] [i_1]))))) << (((arr_1 [i_1] [i_0]) - 119))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_14 [i_0 + 2] [i_1] = ((((((max((arr_2 [8] [i_3]), (arr_0 [i_1])))) ? ((((var_2 <= (arr_1 [i_0] [i_0 - 1]))))) : (((arr_0 [i_3]) ? (arr_1 [i_0] [i_0]) : var_6))))) & (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1]))));

                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                arr_18 [i_1] = ((+(((!var_8) ? (!158396900) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? 16 : var_11))))));
                                var_22 *= (max(((+(((arr_1 [0] [0]) + (arr_7 [i_0] [i_0 - 1] [i_0] [i_0]))))), (((arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]) / -var_2))));
                                arr_19 [i_0] [i_1] = (~var_15);
                                var_23 = ((-1896924676 ? (((!((((arr_2 [i_1 + 1] [i_1 - 2]) ? 595088576 : (arr_16 [i_4 + 1] [i_2]))))))) : ((max((arr_16 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((~(var_3 || 46173)))) >= ((((var_15 ? var_11 : var_12)) << ((((var_4 ? var_11 : 18446744073709551609)) - 12340195698416063316))))));
    #pragma endscop
}
