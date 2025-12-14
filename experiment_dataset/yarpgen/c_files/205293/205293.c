/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, var_6));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((((min(2047, 53456))) && (~var_13))) ? ((~(7 != -1))) : -var_12);
                    arr_8 [i_1] [i_1] [i_2] [i_1] |= 1073600100;
                }
            }
        }
    }
    var_17 = var_10;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            {
                var_19 = (max(var_19, (((((((var_4 ? 5929864268131544755 : 1073600100))) ? ((((arr_12 [i_4]) - 9618163))) : var_3))))));
                var_20 = (max(var_20, ((max(((var_5 ? (~var_0) : (arr_4 [i_4] [i_4 - 1] [12]))), (((arr_0 [i_4 + 1] [i_4 - 2]) ? (3950 * 5010) : -5303770308220397768)))))));
            }
        }
    }
    var_21 = ((((0 * var_4) ? -9618163 : -1586406626)));
    #pragma endscop
}
