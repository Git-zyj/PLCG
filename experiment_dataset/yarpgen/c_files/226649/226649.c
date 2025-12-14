/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((var_8 * -1), (((var_5 + 9223372036854775807) >> (var_0 - 26846)))));
    var_20 *= var_5;
    var_21 += ((var_17 ? ((((var_12 ? var_14 : var_10)) ^ -1)) : ((((max(var_10, var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 + 2] = ((-var_11 >> (((arr_3 [i_1] [i_1]) + 2287))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_22 = (((arr_7 [i_0] [i_0] [i_0]) ? (var_16 && 5) : ((((((arr_3 [i_0] [i_1]) ? var_8 : (arr_9 [i_1] [i_1] [20])))) ? 8 : (arr_9 [i_1] [i_2 - 1] [i_2 + 1])))));
                            var_23 = (max(((((min(-2, (arr_10 [i_1] [3] [3] [i_2 + 1] [i_2 + 1])))) ? (arr_8 [i_1] [i_1] [i_2 - 1] [i_1]) : 64892)), (((arr_10 [i_1] [i_0] [i_3] [8] [5]) ? (arr_10 [i_1] [i_3] [i_2 + 1] [i_1] [i_1]) : 56))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
