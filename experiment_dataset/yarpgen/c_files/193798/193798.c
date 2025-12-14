/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = ((((min(11, 28)))) - ((((var_2 ? var_3 : var_12)) * (var_10 / var_5))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2 - 3] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = ((var_6 * (((min(((35764 <= (arr_11 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0]))), (!2147483632)))))));
                                var_22 = ((((((arr_7 [i_4 - 2] [i_2] [i_0 - 1]) ? (arr_7 [i_4] [i_2] [i_0 + 2]) : 29771))) ? ((((var_12 ? var_2 : var_5)) >> (var_4 & 1))) : (((min((!1), 1))))));
                                var_23 = (((max(var_18, 1)) - (!367884843)));
                                var_24 ^= (~((~(max(var_15, var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((-312982445 ? (var_3 < 367884843) : ((var_15 ? 235722972 : var_14))))) && (((((2005390482 ? var_2 : 3927082460)) & (((var_5 ? var_17 : -1116331393))))))));
    var_26 = (min(((((((min(var_8, var_16)) + 2147483647)) >> ((((var_1 ? var_17 : var_16)) + 28))))), var_4));
    #pragma endscop
}
