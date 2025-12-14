/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 17601497232619135619;
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (((min(var_4, (((-1188766001 + 2147483647) >> (var_12 - 1262869450)))))) ? (((~var_10) & (((1038774634375586298 ? var_6 : -20))))) : ((1 ? (((var_1 << (var_5 - 20658)))) : (~var_10))));
                    var_16 = ((((max(((min(98, (arr_3 [17])))), (max(var_3, (arr_5 [i_0] [i_1] [i_2] [15])))))) ? (((((max(1038774634375586290, -1038774634375586291))) ? var_4 : -var_9))) : (min((arr_2 [i_2]), var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((-var_2 ? (((!((min(208, var_5)))))) : -1038774634375586316));
                                var_18 = (((-30286 / 1038774634375586290) ? (((246 / (arr_2 [17])))) : var_10));
                            }
                        }
                    }
                    var_19 = (max(var_19, var_0));
                }
            }
        }
    }
    #pragma endscop
}
