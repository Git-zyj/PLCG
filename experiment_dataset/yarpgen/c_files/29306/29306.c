/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max(12397862594024702296, (((var_10 ? var_7 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = -38;
                arr_4 [i_0] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = var_10;
                            var_18 = (min(9223372036854775807, -5247373890446422475));
                            arr_11 [i_0] [4] [i_1] [i_3] [i_3] [i_3] = (!13565172257654521706);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
