/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (-(var_1 ^ var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((min(-14754, (((max(var_9, 214)))))))));
                            var_24 -= 782236326;
                        }
                    }
                }
            }
        }
    }
    var_25 = var_5;
    #pragma endscop
}
