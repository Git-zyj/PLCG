/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((!0) ? var_14 : var_8))) ? (max(11774, ((var_14 ? -11769 : -1424033607)))) : (min(var_11, var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-11775 ? 10154 : 11786));
                arr_5 [i_0] [i_1] [i_1] = (min((max(((~(arr_3 [i_0]))), var_13)), ((((((arr_1 [i_1] [i_0]) ? var_3 : (arr_3 [i_0])))) ? (arr_3 [i_0 - 1]) : ((127 ? var_12 : var_10))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] = (max(849847431430898797, var_8));
                            arr_12 [i_2] [i_1] [i_1] [i_1] = (((((((var_2 << (11774 - 11750))) - var_0))) ? (var_3 % var_7) : ((((min(var_5, 0))) ? (~var_9) : (min(-954938459, var_15))))));
                            arr_13 [i_1] [i_2] = (0 / -11787);
                            var_17 = ((max(((var_3 ? var_4 : var_8)), (!var_11))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
