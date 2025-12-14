/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((var_7 ? (var_0 != var_14) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((((~(arr_3 [i_0] [i_0] [i_1]))) ^ (~var_1)))) ? ((var_5 ? (max(-1, var_10)) : (arr_2 [i_0] [i_0] [i_1]))) : (((arr_2 [i_0 + 2] [i_1 - 1] [i_0 - 1]) ? var_8 : var_11))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [14] [i_1] [i_3] = (~-var_7);

                            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = (max((max(var_2, (arr_10 [i_1] [i_0 - 2] [i_1 - 4]))), ((-(min(var_0, var_11))))));
                                var_18 += 2537906768243218271;
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1 - 1] [i_1] [i_1] [i_2] [i_0] [i_5] = var_1;
                                var_19 -= (max(-var_3, ((min(0, -0)))));
                                arr_19 [i_2] [i_1] [i_2] [i_2] [i_2] = var_10;
                                var_20 ^= (((arr_6 [i_5] [i_2] [i_2] [i_0]) ? (((~(~1)))) : ((4194272 ? ((max(4194261, 1442295909))) : (((arr_12 [i_2] [i_2] [i_2] [i_3] [i_5] [i_2] [i_3]) ? (arr_4 [i_2] [i_5]) : var_15))))));
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                            {
                                var_21 *= (((((var_0 ^ (max((arr_20 [i_1] [i_1] [i_3] [i_1] [6] [i_6]), var_2))))) ? ((-2537906768243218283 ? (arr_17 [6] [i_0] [i_1 + 2] [i_1] [i_2] [i_2] [i_6]) : ((~(arr_14 [i_1] [i_1] [i_2] [i_6] [i_6]))))) : (arr_0 [i_0 - 2] [i_1 - 4])));
                                var_22 = (((arr_10 [i_1] [i_0 + 1] [i_1]) ? ((var_10 ? -1463549357097515724 : (arr_22 [i_0] [i_0 + 1] [i_2] [i_0] [i_1] [i_2]))) : ((~(arr_20 [i_0] [i_0 + 1] [i_0] [i_3] [i_6] [i_6])))));
                            }
                            var_23 = (min(var_23, var_14));
                            arr_23 [i_0] [i_1] [i_2] [i_3] = ((max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]), 2537906768243218274)));
                            var_24 -= (arr_17 [i_3] [i_1 - 3] [i_2] [i_3] [i_1] [i_2] [i_3]);
                        }
                    }
                }
                arr_24 [i_1] [i_1] = ((((!(!var_4))) ? var_14 : (min((((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_1 - 4] [i_0])))), (((arr_5 [i_0] [8]) ? (arr_6 [i_0] [i_1] [i_1 - 4] [i_1]) : -6))))));
            }
        }
    }
    var_25 = (~var_9);
    #pragma endscop
}
