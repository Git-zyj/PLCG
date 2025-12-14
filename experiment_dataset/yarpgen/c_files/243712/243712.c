/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_12 = (arr_5 [i_0] [i_1 + 1] [i_2]);
                    arr_7 [i_2] [17] [17] = ((((max((arr_4 [i_0 + 2]), (arr_5 [i_1 - 1] [i_1] [i_0])))) ? (!1) : var_8));
                    arr_8 [i_0] = ((var_0 != (((77 ? (arr_5 [i_0 - 3] [i_0] [i_0]) : (max(var_5, 0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = ((((-(((arr_9 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1]) ? (arr_4 [2]) : 65527))))) ? (max((max((arr_3 [i_0]), -6202457430516962085)), (arr_9 [i_0] [0] [i_2] [i_1 - 1] [i_3] [0]))) : (((~(arr_3 [i_0])))));
                                var_14 *= (((((((1007727987479555260 ? 0 : (arr_6 [i_0]))) == (-6202457430516962085 + var_9)))) - (((!((((arr_2 [i_1]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [13] [i_0]) : (arr_5 [i_0] [i_0] [i_2])))))))));
                                var_15 = ((!(((((((arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]) + var_6))) ? 0 : var_8)))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
