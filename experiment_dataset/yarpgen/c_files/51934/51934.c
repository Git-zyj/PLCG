/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_0] = (max(1, 6467338321270272361));
                                var_13 ^= (((((arr_0 [i_3]) ? 5076005523612022911 : (((-14 ? 1 : 948320312))))) * 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_0] [4] [1] [4] = (240 + -5056366010670391054);
                                var_14 = 65535;
                                var_15 = (min(var_15, 1528842211642499931));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, (var_2 != var_2)));
    var_17 = var_9;
    #pragma endscop
}
