/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [1] = ((!((max((max(-9795, 494934629)), var_2)))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_16 = (max((arr_4 [i_0]), ((var_9 ? (arr_5 [i_0] [i_0] [i_1]) : (max(2025156907, 4005681317))))));
            var_17 = ((-512 * ((1 ? ((35020 ? -919139266 : 4294967285)) : var_13))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_18 = (((~255) ? (((var_9 ? 1 : var_7))) : var_15));
            var_19 = (((arr_0 [i_0] [i_2 + 1]) ? var_3 : (arr_0 [3] [i_2 + 1])));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_20 = ((15797375001325708851 ? -512 : (((!(arr_9 [i_0] [i_0]))))));
            var_21 = (((arr_5 [i_3 - 2] [i_3] [i_3]) && (arr_0 [i_3 - 2] [i_3 - 2])));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_22 = 237;
            arr_12 [i_4 + 1] = 140736414613504;
            var_23 = (min(var_23, ((!(~var_0)))));
            var_24 ^= var_13;
        }
    }
    var_25 = var_3;
    var_26 = var_5;
    #pragma endscop
}
