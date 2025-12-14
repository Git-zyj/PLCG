/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((((max(-492495554, -2760))) ? 669565553 : (min(669565580, var_3)))), var_8));
    var_11 = var_8;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [1] [i_2] [i_3] [i_3 - 2] = ((+(((-20 - 669565556) ? var_4 : 84))));
                        arr_10 [i_0] [i_0] [i_2 - 2] [i_0] [i_0] &= ((669565553 ? (max((((-15 ? 16383 : 0))), 112)) : ((((var_3 + 6384526782730871793) ? ((25 ? var_9 : -10940)) : var_9)))));
                        arr_11 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] = var_3;
                        arr_12 [1] [i_2] [i_3] = (min(16383, ((-((0 ? (arr_8 [i_0 - 2] [1] [i_0 - 2] [i_0] [1] [i_0]) : var_7))))));
                        var_12 = (min(var_12, ((((max(635055467, 1)) % (19122 != 734278054072555209))))));
                    }
                }
            }
        }
        arr_13 [0] = (~4294967295);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_13 ^= ((((((~(arr_15 [6]))) ? (~0) : 2922021494))));
        var_14 = (min(var_14, (~var_7)));
    }
    var_15 = (min((((var_2 | 1) ? (~var_5) : var_5)), var_6));
    #pragma endscop
}
