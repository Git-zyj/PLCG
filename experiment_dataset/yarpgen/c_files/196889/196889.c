/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (min((max(3, -1959478839)), (5 && -2045152250)));
                            var_19 = -var_1;
                        }
                    }
                }
                var_20 = -8191;
                var_21 |= (-125829120 - var_10);
                arr_13 [i_0] [i_1] [i_0] = ((-((-(max(var_2, var_4))))));
            }
        }
    }
    var_22 = var_14;
    var_23 = (max(var_23, ((((((((1264320914 && var_11) ? 34819 : ((var_17 ? 4889285613444461420 : 2045152259)))) + 9223372036854775807)) << (((-2128395157338086219 + 2128395157338086278) - 59)))))));
    #pragma endscop
}
