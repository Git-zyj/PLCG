/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(var_15, ((var_6 ? 20444 : -19753)));
    var_20 ^= (((((var_14 ? 74153902 : var_0))) ^ var_17));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = min(((((var_4 ^ -18379) < var_0))), ((var_13 ? ((min((arr_0 [i_1] [i_0]), (arr_1 [i_0])))) : var_11)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = (-20462 ? -143686385 : ((143686384 ? 20454 : (((-19758 <= (arr_7 [i_0 - 1])))))));
                            var_22 ^= (((((min((arr_6 [i_0 + 1] [i_3 + 2] [i_2 + 2]), var_15)) + 2147483647)) >> ((var_18 ? (9679 || var_10) : (max(var_14, var_0))))));
                            var_23 = min((441651113 + -1989004150), var_7);
                        }
                    }
                }
                var_24 = (((((~(arr_0 [i_0] [i_0])))) ? (~var_17) : ((var_18 ? (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]), -40057794)) : (min((arr_6 [i_0 + 2] [i_1 + 2] [i_1 + 2]), 32639))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_25 = -1989004150;
                            var_26 = max((max((-1344568611 ^ var_15), -628430573)), -1344568601);
                        }
                    }
                }
            }
        }
    }
    var_27 = (((max((var_12 >= -1344568613), (max(var_12, -17236))))) ? (max((var_14 | var_16), var_5)) : ((min(14043, 15199))));
    #pragma endscop
}
