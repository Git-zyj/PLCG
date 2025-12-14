/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((~((17712570026518582347 ? 734174047190969268 : (arr_4 [i_0] [1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_21 = (((((-(arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_3] [i_1] [i_1])))) ? (~0) : -1));
                                var_22 = (min(1, 1));
                                var_23 = (((((!0) ? (arr_11 [i_4] [4] [i_4] [i_3] [i_2] [0] [0]) : var_8)) << (((max(((1 ? 511 : 1)), var_5)) - 24605))));
                                var_24 = ((!((((max(6002747226515656945, (arr_2 [i_0]))) | ((var_1 ? 6161651366136369308 : var_16)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_10;
    var_26 = var_12;
    #pragma endscop
}
