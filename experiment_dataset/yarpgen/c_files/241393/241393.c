/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 = (((arr_6 [i_0] [i_0] [i_3]) ? (((-741840802 ? 510880314 : -510880314))) : ((((min(var_9, var_4))) ? var_10 : ((var_1 ? var_1 : (arr_6 [i_3] [i_0] [i_3])))))));
                            var_13 *= (((min(1469, 102))) <= (max(1461, 510880313)));
                        }
                    }
                }
                var_14 = (((((-30549 + (arr_9 [i_1 - 2] [i_1] [i_1 - 1] [i_1] [i_1 + 1])))) ? (((!4294967295) % (-510880314 & -1478))) : var_6));
                var_15 = (min((min((arr_6 [i_1 + 1] [i_0] [i_1 + 1]), var_8)), (max(-1470, (arr_6 [i_1 + 1] [i_0] [i_1 + 1])))));
                var_16 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_17 = (max(var_17, ((max(((var_7 ? (max(var_5, 0)) : 1461)), ((min(102, var_6))))))));
    #pragma endscop
}
