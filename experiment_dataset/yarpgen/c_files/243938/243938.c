/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_7, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 &= (max(var_7, 50));
                            var_13 = 0;
                            var_14 = (var_5 ? ((var_8 ? (((arr_9 [i_0] [i_1] [8]) ? -2891119877405810125 : -23993)) : ((((arr_8 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] [i_2]) - 757))))) : (((~(~-24005)))));
                            var_15 = (min(-23993, -5671257645833199589));
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1] = ((!(arr_1 [i_0])));
            }
        }
    }
    var_16 = (max(var_16, ((max(var_10, (((23992 != (-31622 * var_8)))))))));
    var_17 = var_4;
    var_18 = (~var_7);
    #pragma endscop
}
