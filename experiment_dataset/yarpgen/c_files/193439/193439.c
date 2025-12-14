/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max(1, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((18955 ? var_1 : (~18940)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = ((!(((19 ? 1 : 1720769452388623749)))));
                                var_13 = 46595;
                                var_14 = (((((((var_5 >> (18940 - 18931)))) ? (var_6 == var_2) : var_1)) | (((255 ? 1023 : ((max(255, var_0))))))));
                            }
                        }
                    }
                }
                var_15 -= arr_0 [1];
            }
        }
    }
    #pragma endscop
}
