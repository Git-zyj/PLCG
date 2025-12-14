/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 &= ((690232416 ? (arr_9 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : var_11));
                            var_17 += (var_11 ? var_10 : ((((max(36692, -25234))) ? 65535 : ((25233 ? 28844 : 16461397716919240235)))));
                        }
                    }
                }
                var_18 |= ((36692 ? 3745272090 : 36683));
                var_19 = (min(var_19, var_2));
                var_20 ^= -92;
            }
        }
    }
    var_21 &= var_15;
    #pragma endscop
}
