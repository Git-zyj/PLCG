/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_9;
    var_20 = (var_14 % var_6);
    var_21 ^= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((1 << (16777215 - 16777209))))));
                                var_23 = (max(4278190082, 16777213));
                            }
                        }
                    }
                }
                var_24 = 16777214;
            }
        }
    }
    #pragma endscop
}
