/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 + 2] = ((-((9 ? 21780 : 1314910353))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 3] [i_0] [0] [i_0 + 3] [i_0] = (max(-1295277835, 31206));
                                var_15 = ((~(-2147483647 - 1)));
                                var_16 = (min(var_16, (~988660886)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, 1295277834));
    var_18 ^= 2769664345;
    var_19 += ((31526 ? -64 : -641290291));
    #pragma endscop
}
