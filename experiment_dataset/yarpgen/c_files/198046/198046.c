/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((((782175304 ? 2064159322203752595 : var_9)))) ? (!var_17) : (max(9223372036854775807, ((-2444 ? var_13 : var_5))))));
    var_19 *= (((max(2444, 2443))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2 - 2] [i_1] [i_1] [i_0] = ((max((max(28513, -4714664895912649001), (((1023 ? var_5 : 64512)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 |= (max((max((max(0, var_5)), ((max(37023, -2420))))), (max(((32176 ? var_0 : var_11)), (((arr_13 [i_3]) ? var_10 : (arr_3 [i_0] [i_1 + 1] [i_2])))))));
                                var_21 += (((((var_9 ? -var_14 : ((max(1686551541, var_5)))))) ? (max((max((arr_5 [i_1 - 2] [i_2 + 2] [i_3] [i_4]), var_12)), ((max(4069919017, -32177))))) : ((max((max((arr_2 [i_1 - 2] [i_1 - 2]), 1216197903)), (max(var_0, (arr_2 [i_0] [i_1]))))))));
                                var_22 -= (max((((~550252038649472166) ? ((max(32176, (arr_14 [i_0 - 1])))) : (max(2443, (arr_1 [i_3]))))), (((!((max(var_6, var_1))))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2 - 1] [i_2] = ((!(((~(max(var_17, var_16)))))));
                }
            }
        }
    }
    #pragma endscop
}
