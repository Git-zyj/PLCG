/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 908095529;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min(((((max(1, var_18))) - var_19)), (49949 + 8388607)));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_21 = (min(5973, 1));
                    arr_8 [i_1] [i_1] [i_1] = var_1;
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (arr_7 [i_0 + 1] [i_1] [i_2] [i_2 - 1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_22 = (~var_1);
                    var_23 = (max(var_23, var_9));
                }
                var_24 = ((((min((arr_10 [i_0 + 1] [i_0 + 1] [i_0]), (var_18 || var_5)))) ? (min(((((arr_3 [i_0] [i_0 + 1] [i_1 + 1]) % 187))), (min(23379, 7401844995897462906)))) : ((max((arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]), var_15)))));
                var_25 = (min(var_25, 1));
            }
        }
    }
    #pragma endscop
}
