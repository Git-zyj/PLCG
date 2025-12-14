/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] = var_6;
                            var_19 = (-(((280329987 ^ (arr_8 [i_1] [i_1])))));
                            var_20 = (((790647737 ? 280329976 : 12077423866036234138)));
                        }
                    }
                }
                var_21 -= (((arr_2 [8]) + var_9));
                arr_13 [i_1] = (max(((((~1) ? (max(var_13, var_5)) : var_9))), (((~var_3) ? var_2 : ((max(var_13, -634993630)))))));
                var_22 &= (((((var_2 ? (min(var_14, var_8)) : (!-634993636)))) ? ((max((arr_9 [10]), ((max((arr_1 [i_0] [i_1]), (arr_1 [1] [1]))))))) : var_17));
            }
        }
    }
    var_23 = (((var_1 * var_5) * (65535 * 1)));
    var_24 &= var_5;
    #pragma endscop
}
