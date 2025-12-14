/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (~var_4);
    var_21 &= (1 <= var_4);
    var_22 = (max(var_22, (2047 * -41)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = -3603341179065552386;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (((arr_5 [i_0] [i_1] [i_2]) ? (min(-25, 3200863326052749351)) : var_10));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_23 = (max(var_23, ((((-(min((arr_3 [i_0]), 633897781))))))));
                                var_24 = -var_1;
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [11] [i_2] = ((+(((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_8 [i_1 - 2] [i_1] [i_1 - 2]) : var_13))));
                                var_25 ^= ((((arr_2 [i_0]) || (((arr_14 [i_1] [i_1] [i_1] [i_5]) && var_10)))));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_26 = (min(var_26, var_13));
                                arr_23 [i_1] [15] [i_1] [i_3] [i_6] [15] = (((((~(max((arr_3 [i_2]), var_12))))) ? (!633897799) : -8106465404836099867));
                                var_27 ^= (((((arr_21 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0]) ^ ((min(1, 633897789))))) ^ -4423711634147866283));
                                arr_24 [0] [0] [i_2] [i_3] [i_6] = 40;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
