/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((2251795518717952 - 3243094339935652465) ? (((18398111312986976581 + 2251795518717952) ? 18444492278190833662 : 9188762597310810990)) : 9223372036854775807));
                    var_18 &= 14193860930738976146;
                    arr_10 [i_2] [i_0] [7] = 9188762597310810974;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0] [i_2] [i_1] [i_1] [i_0] [3] = (min(14193860930738976146, (10710907468561074717 * 9257981476398740625)));
                                var_19 ^= ((~(~32745)));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] = 1;
                }
            }
        }
    }
    var_20 *= (max((((var_10 ? var_0 : (5 + 6738397410749488292)))), (max(24, 9188762597310810984))));
    #pragma endscop
}
