/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((((var_0 ? 9223372036854775807 : 1822999074)) - var_14)) ^ (~var_9)));
    var_21 = (min(var_21, ((((-(var_3 == var_14)))))));
    var_22 = (max(var_22, ((min((-32767 - 1), (min(0, (-32767 - 1))))))));
    var_23 &= var_14;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_24 &= (((~(arr_0 [i_0 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((!((max((((-32767 - 1) ? 1474842000164914760 : (-32767 - 1))), 9263203394384098030)))))));
                            var_26 = (min(var_26, ((((((!(((var_7 ? (arr_10 [i_0] [i_1] [i_0] [i_3]) : 32762)))))) << (((32762 < (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))))))));
                            var_27 = (max(var_27, (((-(max(var_17, ((3292477093 ? 8521 : 8521)))))))));
                            var_28 *= (arr_10 [i_0] [i_1] [6] [i_3]);
                        }
                    }
                }
                var_29 *= 938245126;
            }
        }
    }
    #pragma endscop
}
