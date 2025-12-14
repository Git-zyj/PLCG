/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = ((66 ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : 190));
                var_21 = (max(var_21, ((min(1, ((-29829 ? var_12 : 206)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 ^= (min((min(59, (arr_9 [i_0] [14] [i_0]))), ((max(-1960567340635929140, ((min(131064, 10723))))))));
                                var_23 = 10723;
                            }
                        }
                    }
                }
                var_24 *= -6830832064168459161;
            }
        }
    }
    var_25 |= min(var_13, (var_11 | var_3));
    #pragma endscop
}
