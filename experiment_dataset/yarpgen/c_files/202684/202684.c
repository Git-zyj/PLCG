/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 += ((9223372036854775807 ? (-9223372036854775807 - 1) : (-9223372036854775807 - 1)));
                                arr_14 [i_0] [i_1] [i_2] = -9223372036854775807;
                            }
                        }
                    }
                    var_14 |= ((((((~-6596391386449088384) ? -9223372036854775782 : (min(-9223372036854775803, var_5))))) ? (!-9223372036854775783) : (+-9223372036854775805)));
                }
            }
        }
    }
    #pragma endscop
}
