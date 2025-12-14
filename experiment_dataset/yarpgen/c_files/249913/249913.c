/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((((arr_5 [i_0]) ? var_6 : (arr_2 [i_0] [i_1])))) ? (((~(arr_4 [i_0] [i_1])))) : ((var_8 ? (((~(arr_3 [i_0] [i_1] [i_0])))) : ((var_1 ? var_2 : 2))))));
                var_16 = ((((((1 ? var_10 : (arr_0 [i_1]))))) && (((~(~var_9))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 -= var_0;
                arr_12 [i_3] [i_2] = arr_11 [i_2];
                var_18 ^= ((((((arr_7 [i_3]) ? 4900562467939990171 : 250))) ? ((((127 || (arr_2 [i_2] [i_2 + 1]))) ? (!var_8) : (223 & var_10))) : var_10));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_19 = 0;
                            var_20 = (max(var_20, 4117540090973588163));
                        }
                    }
                }
            }
        }
    }
    var_21 -= ((((max(var_0, 1))) ? var_7 : ((4117540090973588132 ? ((min(var_0, var_13))) : var_7))));
    var_22 = ((~((var_2 / ((var_13 ? var_10 : 18446744073709551612))))));
    #pragma endscop
}
