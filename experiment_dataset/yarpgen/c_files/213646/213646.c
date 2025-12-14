/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((max(var_0, (max(28, (-2147483647 - 1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0 + 3] [i_1] [9] &= ((((max((~var_4), (1683966414 | 18446744073709551605)))) ? ((max(((min(254, var_11))), (arr_4 [i_0 - 1] [3] [3])))) : -3434077820856162531));
                var_16 += ((!(arr_1 [i_1] [i_0])));
                var_17 += ((((((arr_3 [i_1]) | var_14))) ? (max((((!(arr_1 [i_1] [i_0])))), (((arr_1 [i_0] [4]) - (arr_0 [i_0]))))) : -812358254));
            }
        }
    }
    var_18 = (min(var_18, (50 >> 28)));
    var_19 = (min(var_19, var_1));
    #pragma endscop
}
