/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(4294967295, (((var_8 ? -810048560 : 691220455595687985))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 *= (max(((var_10 * (max(0, -1821028720)))), 5666599455110136461));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = ((((((-691220455595687986 | 0) ? (arr_8 [i_1] [i_2] [i_3 - 1]) : var_10))) ? ((var_0 ? var_12 : var_1)) : (arr_1 [i_0])));
                            var_19 = var_2;
                            var_20 -= ((((((max(var_14, var_13))) ? ((max(var_0, var_13))) : (max(2481969576, -8303896633493309289)))) > ((((arr_7 [i_0] [i_2] [i_3 - 1]) ? (arr_7 [i_0] [i_1 - 1] [i_3 - 1]) : (arr_7 [i_0] [i_1 - 1] [i_2]))))));
                            var_21 = (arr_5 [i_1 - 1] [i_1 - 1] [i_3 - 1]);
                        }
                    }
                }
            }
        }
    }
    var_22 ^= (max(231, (((var_10 != (-12254 && 183))))));
    #pragma endscop
}
