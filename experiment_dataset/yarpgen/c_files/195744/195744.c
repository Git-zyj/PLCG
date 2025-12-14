/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_2, (18446744073709551615 == 129)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((-3444781068212801316 ? 22840 : 819609998181132402));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((115 ? 118 : 294891372)))));
                            var_21 = (137 - -6473);
                            var_22 = ((((max(((((arr_4 [i_3] [i_2] [i_1] [i_0]) >= (arr_4 [i_0] [i_1] [i_1] [12])))), (arr_3 [i_0 - 2] [i_1 + 1] [i_1 - 2])))) ? (min(((max((arr_6 [i_0 - 2] [i_1 - 1] [10] [i_3]), (arr_6 [i_3] [i_1] [i_3] [i_3])))), (min((arr_4 [18] [i_1 + 1] [16] [2]), (arr_3 [i_0] [i_1] [i_2 + 2]))))) : ((max(((-3616 ? 1739749054 : -108)), 154)))));
                            var_23 = (arr_7 [i_0 - 2] [i_1] [i_2] [i_0 - 2]);
                            var_24 = (arr_2 [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((max(255, 14149619765024143699)) * (((((max((arr_7 [i_0 + 2] [i_1] [i_5] [i_5]), (arr_1 [i_0]))))) - (min(7289756194446000520, 13731678068124275089)))))))));
                            var_26 += -6474;
                            var_27 = (arr_2 [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
