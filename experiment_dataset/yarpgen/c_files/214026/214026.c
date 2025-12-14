/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((~2637659585) % (~var_8)))) != ((1657307685 ? var_13 : var_11))));
    var_19 ^= (min(2637659585, var_14));
    var_20 += ((var_9 % (((!var_6) ? (var_6 != var_16) : ((var_1 ? 1148654971316333441 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_21 = 1;
                            arr_9 [i_3] [i_2] [2] = (((((arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]) ? 1657307710 : (arr_8 [i_0] [i_0 + 1] [5] [i_0] [i_0 + 1] [i_0]))) * (min(0, (arr_8 [i_0 - 2] [i_0] [i_0] [i_1] [i_2] [i_3])))));
                            arr_10 [i_3] [12] = (var_0 * (max((var_17 % -1), (((!(arr_1 [i_1] [i_3])))))));
                            arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_3] = var_6;
                        }
                    }
                }
                var_22 ^= (((arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 1]) ? ((var_4 ? var_7 : (arr_4 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1]))) : (((arr_4 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 2]) ? (arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) : -3))));
                arr_12 [i_0 - 1] &= ((max((arr_7 [i_0 - 2] [i_0 - 1]), (arr_0 [14]))));
            }
        }
    }
    var_23 = (((((((min(0, -1))) ? 0 : var_12))) != (min((~var_13), var_15))));
    #pragma endscop
}
