/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (max((arr_5 [1] [i_1]), ((~(arr_6 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = (((min((var_1 == var_1), var_13)) == (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [4])));
                            var_18 = ((+(((arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]) * 1006632960))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(((((8340 || var_12) || var_4))), (((var_9 ? var_3 : var_10)))));
    var_20 = 1006632960;
    var_21 = ((((min((~var_14), (var_8 || var_11)))) ? (((var_7 != var_5) ? ((max(1, var_7))) : var_7)) : (!var_9)));
    #pragma endscop
}
