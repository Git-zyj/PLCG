/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_4 ? ((-(~110))) : 65535);
    var_16 &= ((~(!5569600009755564840)));
    var_17 = (max(var_17, (~165)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((max(((max(10091, ((56053 ? -1155 : 31))))), 5050960219165570126)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [13] [13] [i_4] = 38;
                                var_19 = 51163;
                            }
                        }
                    }
                    var_20 = (max(var_20, 48029));
                }
            }
        }
    }
    #pragma endscop
}
