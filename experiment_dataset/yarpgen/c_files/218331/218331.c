/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_10 = (arr_3 [i_0] [i_0]);
                var_11 = (min(var_11, ((((max(((0 ? -7 : 3)), (arr_3 [i_0] [i_1])))) ? ((((max(-7070146203913532142, 65535))) ? 0 : (arr_1 [i_0] [i_0]))) : ((min(217087695, (((52797 ? -56 : 100))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_12 = arr_4 [i_1] [i_0] [i_1];
                    var_13 = -10;
                    var_14 = (max(var_14, (arr_4 [i_0] [i_1] [1])));
                    var_15 = ((arr_2 [i_1]) ? 7430651704480097696 : (arr_4 [i_1 + 1] [i_1 + 1] [i_1]));
                    var_16 -= (arr_3 [i_1 + 1] [i_0]);
                }
                var_17 = var_6;
            }
        }
    }
    var_18 = var_9;
    var_19 = (max((((!(((-85 ? 41576 : var_5)))))), ((var_4 & (var_1 | var_3)))));
    #pragma endscop
}
