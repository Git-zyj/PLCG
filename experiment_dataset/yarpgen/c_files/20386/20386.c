/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 &= ((~(~34700)));
                var_19 = (~65535);
                var_20 = ((!(!30835)));
                arr_6 [i_0] [i_0] [21] = (max((!2247263225649385041), ((15117538876031309888 ? 30864 : 30856))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = ((!((!((max(-2845805410042169942, 36603)))))));
                                var_22 &= (-124 && -1);
                            }
                        }
                    }
                }
                var_23 = (max(var_23, ((max((~1), (!65522))))));
                var_24 = (min(((+(min((-9223372036854775807 - 1), 65517)))), ((min(-68, ((8 ? 36603 : 104)))))));
                var_25 = 36603;
            }
        }
    }
    #pragma endscop
}
