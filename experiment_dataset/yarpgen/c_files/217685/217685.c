/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((+((-339541028 ? (arr_5 [i_0] [4] [i_1]) : ((58578 ? var_0 : var_6)))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = 18446744073709551612;
                            var_12 = (min(var_12, (((255 << (235 - 229))))));
                        }
                    }
                }
            }
        }
    }
    var_13 = 235;
    var_14 = -20;
    #pragma endscop
}
