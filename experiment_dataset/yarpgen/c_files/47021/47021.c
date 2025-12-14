/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 &= ((!(arr_4 [i_0] [2] [i_2] [i_2])));
                    var_15 *= ((var_10 ? 36 : 36));
                    var_16 = var_1;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((((max((arr_8 [i_0]), -15))) ? (min(-21085, 21092)) : -37));
                            arr_14 [i_3] |= (+((36 ? (~-1) : (!var_10))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
