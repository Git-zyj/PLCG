/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-0, ((min(var_8, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (((min((((var_6 ? var_5 : var_1))), -0))) ? var_7 : (((((min(var_8, var_8))) ? (var_1 | var_11) : ((min(var_4, var_2)))))));
                arr_5 [i_0] [i_0] [i_0] = (max((((max(var_5, var_7)) | (~var_3))), var_1));
                arr_6 [i_0] [i_1] = ((-(((((0 ? 1 : 4237300110459329148))) ? (var_12 / var_0) : (max(var_5, var_10))))));
            }
        }
    }
    var_15 = var_2;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] = (var_8 | var_11);
        arr_12 [i_2] = (var_13 >= var_13);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] &= (min(((min((var_10 <= var_0), (max(var_6, var_4))))), (min(4398046511096, var_10))));
        arr_16 [i_3] = (min((min(32, ((39082 ? -15569 : 14)))), (max((min(var_10, var_5)), (var_1 | var_5)))));
        arr_17 [i_3] = (max((-7 + 34295), var_5));
    }
    #pragma endscop
}
