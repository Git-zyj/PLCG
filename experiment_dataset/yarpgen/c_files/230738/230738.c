/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 5355897509626383257;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (+((max((arr_2 [i_0]), 12653006292658585171))));
                                var_20 = (((((1 ? (arr_1 [i_0 - 2] [i_0 - 2]) : (max(var_11, var_14))))) ? ((((!((min((arr_4 [i_0] [i_1]), (arr_17 [4] [i_2] [i_2] [1] [i_4])))))))) : ((((min((arr_2 [i_1]), var_10))) ? (((arr_10 [i_3] [i_1] [i_4]) - -6197024945386829567)) : ((var_4 ? (arr_12 [i_0 - 1] [i_1] [i_2] [i_2] [i_2]) : (arr_7 [i_1] [i_1] [i_1] [i_1])))))));
                                var_21 = ((-(max(((var_12 % (arr_0 [i_3]))), var_11))));
                            }
                        }
                    }
                }
                var_22 ^= ((0 * ((min(6520908563648074621, (((3161416034 ? (arr_14 [i_1] [i_1] [i_0] [i_0] [i_1] [i_0]) : var_10))))))));
                var_23 = ((var_11 ? (min((((arr_11 [i_1] [i_1] [i_1]) ? var_5 : 6520908563648074621)), (((-481876263 ? 170 : 1729113714))))) : -1986530824));
            }
        }
    }
    var_24 = ((((-(var_16 + var_0))) >= ((var_0 ? (~var_9) : var_15))));
    var_25 |= ((31 ? var_10 : var_14));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_26 = var_15;
                    var_27 -= ((!(((-(arr_17 [i_6] [i_6] [i_6 + 1] [i_6] [i_7]))))));
                }
            }
        }
    }
    #pragma endscop
}
