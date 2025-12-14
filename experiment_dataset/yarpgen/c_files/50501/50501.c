/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((!214) ^ (~30))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = var_3;
                            var_15 = (((~(var_6 || var_5))) / 30);
                            var_16 = (max((min(var_0, 30)), 4319));
                            var_17 *= var_1;
                            var_18 = ((~(!-80)));
                        }
                    }
                }
                var_19 = (~var_12);
            }
        }
    }
    var_20 = 90;
    var_21 = (((((min(var_2, var_6)))) << (var_1 - 49509)));
    #pragma endscop
}
