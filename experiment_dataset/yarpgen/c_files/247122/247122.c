/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((~(((var_2 | -64) & (-20 ^ 2147483647)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = 58;
                var_17 = (max(var_17, ((max((-127 - 1), ((((!(arr_1 [13]))) ? ((var_7 ? var_8 : 38704)) : (((arr_0 [16]) ? (arr_3 [i_0] [i_1] [1]) : var_13)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = (max(var_5, (min(20347, 184190644))));
                var_18 += ((min(-1782298398024805522, 5566672705423525254)));
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_19 = (min(var_19, (max((!-6247846573838965800), (~var_3)))));
        var_20 = (max(var_20, (arr_1 [i_4])));
        arr_16 [i_4] = (-2147483647 - 1);
    }
    #pragma endscop
}
