/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = ((var_11 >= (((var_4 | var_13) ? (201 != 0) : ((var_16 ? 35188 : var_2))))));
    var_19 &= (((201 + 211) + var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (!(16244140138315594893 > 602271737));
                var_21 = (min(211, 201));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = ((219 ^ (-2147483647 - 1)));
                            var_23 = 32;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
