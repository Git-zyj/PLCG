/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_10;
    var_17 = (~1);
    var_18 = (max(var_18, (((var_10 >= (min(var_1, (((var_2 ? 1 : 26197))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (((((-((min((arr_2 [i_0]), (arr_0 [i_0]))))))) ? ((562949953421311 ? ((var_15 ? (arr_6 [i_0] [i_0]) : 34)) : 197)) : 65535));
                                var_20 = -var_13;
                            }
                        }
                    }
                    var_21 = -65531;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, 1));
                                var_23 = (var_15 ? ((((!(arr_1 [i_0]))))) : ((((-12713 ? 1 : (arr_16 [i_0]))) * ((((arr_5 [i_0] [i_1] [i_2]) ? 9770 : -8586))))));
                            }
                        }
                    }
                    var_24 = (((((-((7526360397133606463 ? (arr_10 [i_0] [12] [i_1] [i_0] [i_2]) : var_0))))) < (max(var_2, ((min(var_11, 43)))))));
                    var_25 = ((((min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 4]), var_12))) ? ((max((arr_15 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1 - 3]), (arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 3])))) : (((arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1 - 4]) ? (arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1 - 2]) : (arr_15 [i_0] [i_2] [i_2] [17] [i_0] [i_1 - 4])))));
                }
            }
        }
    }
    var_26 = (((((-((var_4 ? 12712 : var_4))))) | var_2));
    #pragma endscop
}
