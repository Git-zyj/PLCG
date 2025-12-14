/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((((-1 ? var_10 : var_5)) & var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 += (19119 == 0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (arr_3 [i_0] [i_0] [i_3 + 1]);
                            var_18 = (((min((3746828419 != 218), (!var_11))) ? (arr_3 [i_2] [i_1] [i_2]) : (1 + 28306)));
                        }
                    }
                }
                var_19 = (max((arr_7 [i_0] [15] [i_0] [i_0]), (arr_5 [15] [15] [15])));
            }
        }
    }
    #pragma endscop
}
