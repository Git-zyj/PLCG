/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((+(((arr_2 [1] [i_1]) ? var_15 : (arr_2 [i_0] [i_1])))));
                var_17 = var_3;
                arr_4 [i_0] [i_0] [i_0] = arr_2 [14] [14];
                var_18 = 751398823;
                var_19 = (min((((-var_3 ? var_13 : ((max(var_4, (arr_1 [i_0]))))))), var_12));
            }
        }
    }
    var_20 = (0 + 809919738184263929);
    var_21 = ((1 ? -9773 : 17831050929274188334));
    var_22 = ((43 ? 33610 : -751398823));
    var_23 = ((var_13 ? (((-((var_2 << (var_7 - 10202869524614700005)))))) : (((~var_4) ? var_2 : (min(10253134606888595646, 16342))))));
    #pragma endscop
}
