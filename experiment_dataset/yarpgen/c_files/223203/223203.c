/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = -6923594284155731756;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 *= (arr_4 [i_0]);
                            var_22 = (min(var_22, var_12));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_11));
    var_24 = min(var_17, -219);
    #pragma endscop
}
